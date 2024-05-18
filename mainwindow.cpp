#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegExpValidator *validator = new QRegExpValidator(QRegExp("[0-9]+(,[0-9]+)*"));
    ui->PermutationLine->setValidator(validator);

    QRegExpValidator *validator2 = new QRegExpValidator(QRegExp("[0-9]+"));
    ui->RandomPermutationSizeLine->setValidator(validator2);

    QFont font = ui->InsertionT1->font();

    font.setFamily("Monospace");
    font.setStyle(QFont::StyleItalic);
    font.setFixedPitch(true);
    font.setBold(true);

    ui->InsertionT1->setFont(font);
    ui->RecordingT1->setFont(font);

}

MainWindow::~MainWindow()
{
    delete ui;
}

std::vector<int> MainWindow::StrToVec(std::string str)
{
    // Разделить строку на отдельные учасстки, в данном случае числа разделенные запятыми
    std::stringstream ss(str);
    std::string token;
    std::vector<int> arr;

    while (std::getline(ss, token, ','))
    {
        arr.push_back(std::stoi(token));
    }
    return arr;
}

std::string MainWindow::VecToStr(std::vector<int> vec)
{
    std::stringstream ss;
    for (unsigned long long i = 0; i < vec.size(); i++)
    {
        ss << vec.at(i) << ",";
    }
    std::string str = ss.str();
    str.pop_back();
    return str;
}

bool MainWindow::isPermutation(std::vector<int> vec)
{
    unsigned long long n = *max_element(vec.begin(), vec.end());
    if (n != vec.size())
    {
        //Вектор не содержит всех чисел от 1 до n
        return false;
    }
    std::vector<bool> visited(n + 1, false);
    for (unsigned long long num : vec)
    {
        if ((num < 1) || (num > n) || (visited.at(num)))
        {
            //Вектор содержит дубликаты или числа вне диапазона
            return false;
        }
        visited.at(num) = true;
    }
    return true;
}

std::vector<int> MainWindow::RandomPermutation(int size)
{
    //заполнение натуральными числами до N
    std::vector<int> permutation(size);
    for (int i = 0; i < size; i++)
    {
        permutation[i] = i + 1;
    }
    //перемешивание
    random_shuffle(permutation.begin(), permutation.end());
    return permutation;
}

void MainWindow::on_RSKButton_clicked()
{
    std::string content = ui->PermutationLine->text().toStdString();
    if (content == "")
    {
        return;
    }
    std::vector<int> permutation = StrToVec(content);
    if(!isPermutation(permutation))
    {
        ErrorMsgBox.setIcon(QMessageBox::Critical);
        ErrorMsgBox.setWindowTitle("Ошибка!");
        ErrorMsgBox.setText("Данный набор числе не является перестановкой!");
        ErrorMsgBox.exec();
    }
    else
    {
        SYT_pair = RSK(permutation);
        ui->InsertionT1->append(QString::fromStdString("permutation: " + content + "\n\nTable P:\n"));
        ui->RecordingT1->append(QString::fromStdString("permutation: " + content + "\n\nTable Q:\n"));
        ui->InsertionT1->append(QString::fromStdString(SYT_pair.at(0).ConvTabInStr()));
        ui->RecordingT1->append(QString::fromStdString(SYT_pair.at(1).ConvTabInStr()));

        std::string PReadingWord = VecToStr(SYT_pair.at(0).GetReadingWord());
        std::string QReadingWord = VecToStr(SYT_pair.at(1).GetReadingWord());
        ui->InsRW->setText(QString::fromStdString(PReadingWord));
        ui->RecRW->setText(QString::fromStdString(QReadingWord));
    }
}

std::vector<YoungTable> MainWindow::RSK(std::vector<int> permutation)
{
    std::vector<std::vector<int>> InsertionTable;
    std::vector<std::vector<int>> RecordingTable;
    std::vector<int> tmpline;
    int iterator = 0;

    //первый элемент перестановки идет первым в таблицу
    tmpline.push_back(permutation.at(0));
    InsertionTable.push_back(tmpline);

    tmpline.clear();
    tmpline.push_back(++iterator);
    RecordingTable.push_back(tmpline);

    int tmp;
    bool iterationdone = false;
    bool nextline = false;
    //перебираем перестановку
    for (unsigned long long i = 1; i < permutation.size(); i++)
    {
        //обнуление проверки
        iterationdone = false;
        nextline = false;
        //перебираем строки
        for (unsigned long long row = 0; row < InsertionTable.size(); row++)
        {
            //перебираем элементы в строке
            for (unsigned long long column = 0; column < InsertionTable.at(row).size(); column++)
            {
                //найден элемент таблицы превосходящий текущий в перестановке в текущей строке
                if (InsertionTable.at(row).at(column) > permutation.at(i))
                {
                    nextline = true;
                    //ставим элемент перестановки на данное место в таблице
                    tmp = InsertionTable.at(row).at(column);
                    InsertionTable.at(row).at(column) = permutation.at(i);
                    //далее поиск нового места в таблице для данного элемента в следующей строке
                    permutation.at(i) = tmp;
                    //если эта строка была наивысшей в таблице добавляем элемент в начало новой строки
                    if (row == (InsertionTable.size() - 1))
                    {
                        tmpline.clear();
                        tmpline.push_back(permutation.at(i));
                        InsertionTable.push_back(tmpline);
                        iterationdone = true;

                        tmpline.clear();
                        tmpline.push_back(++iterator);
                        RecordingTable.push_back(tmpline);
                    }
                    //переход на строку выше
                    break;
                }
            }
            //проверка на то была ли совершена вставка из перестановки в таблицу на данной итерации
            if (iterationdone)
            {
                break;
            }
            //вставка не была завершена и необходим переход на строку выше
            if (nextline)
            {
                nextline = false;
                continue;
            }

            //не найден элемент таблицы превосходящий текущий в перестановке в текущей строке
            //добавляем его в конец в текущей строки
            InsertionTable.at(row).emplace_back(permutation.at(i));
            RecordingTable.at(row).emplace_back(++iterator);
            break;
        }
    }

    //инвертируем вектор для правильного отображения таблиц
    std::reverse(InsertionTable.begin(), InsertionTable.end());
    std::reverse(RecordingTable.begin(), RecordingTable.end());

    YoungTable S(InsertionTable);
    YoungTable R(RecordingTable);
    std::vector<YoungTable> Arr = { S, R };
    return Arr;
}

void MainWindow::on_clearButton_clicked()
{
    ui->InsertionT1->setText("");
    ui->RecordingT1->setText("");
    ui->RecRW->setText("");
    ui->InsRW->setText("");
}

void MainWindow::on_randPermutationButton_clicked()
{
    std::string content = ui->RandomPermutationSizeLine->text().toStdString();
    if (content == "")
    {
        return;
    }
    int size = std::stoi(ui->RandomPermutationSizeLine->text().toStdString());
    std::string permutation = VecToStr(RandomPermutation(size));
    ui->PermutationLine->setText(QString::fromStdString(permutation));
}

void MainWindow::on_GetReadingWord_clicked()
{
    std::string content = ui->RecordingT1->toPlainText().toStdString();
    if (content == "")
    {
        return;
    }
    std::string PReadingWord = VecToStr(SYT_pair.at(0).GetReadingWord());
    std::string QReadingWord = VecToStr(SYT_pair.at(1).GetReadingWord());
    ui->InsRW->setText(QString::fromStdString(PReadingWord));
    ui->RecRW->setText(QString::fromStdString(QReadingWord));
}


void MainWindow::on_GetReadingWord_2_clicked()
{
    std::string content = ui->RecordingT1->toPlainText().toStdString();
    if (content == "")
    {
        return;
    }
    std::string PReadingWord = VecToStr(SYT_pair.at(0).GetReversedReadingWord());
    std::string QReadingWord = VecToStr(SYT_pair.at(1).GetReversedReadingWord());
    ui->InsRW->setText(QString::fromStdString(PReadingWord));
    ui->RecRW->setText(QString::fromStdString(QReadingWord));
}


void MainWindow::on_GetReadingWord_3_clicked()
{
    std::string content = ui->RecordingT1->toPlainText().toStdString();
    if (content == "")
    {
        return;
    }
    std::string PReadingWord = VecToStr(SYT_pair.at(0).GetColumnReadingWord());
    std::string QReadingWord = VecToStr(SYT_pair.at(1).GetColumnReadingWord());
    ui->InsRW->setText(QString::fromStdString(PReadingWord));
    ui->RecRW->setText(QString::fromStdString(QReadingWord));
}

