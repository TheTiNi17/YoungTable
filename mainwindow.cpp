#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegExpValidator *validator = new QRegExpValidator(QRegExp("[0-9]+(,[0-9]+)*"));
    ui->PermutationLine->setValidator(validator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::vector<int> MainWindow::StringToVec(std::string str)
{
    // Разделите строку на отдельные строки
    std::stringstream ss(str);
    std::string token;
    std::vector<int> arr;

    while (std::getline(ss, token, ','))
    {
        // Преобразуйте каждую строку в целое число и сохраните его в векторе
        arr.push_back(std::stoi(token));
    }
    return arr;
}

bool MainWindow::isPermutation(std::vector<int> vec)
{
    unsigned long long n = *max_element(vec.begin(), vec.end());
    if (n != vec.size()) {
        return false;  // Вектор не содержит всех чисел от 1 до n
    }
    std::vector<bool> visited(n + 1, false);
    for (unsigned long long num : vec)
    {
        if (num < 1 || num > n || visited[num])
        {
            return false;  // Вектор содержит дубликаты или числа вне диапазона
        }
        visited[num] = true;
    }
    return true;
}

void MainWindow::on_pushButton_clicked()
{
    std::string content = ui->PermutationLine->text().toStdString();
    if (content == "")
    {
        return;
    }
    std::vector<int> permutation = StringToVec(content);
    if(!isPermutation(permutation))
    {
        ErrorMsgBox.setIcon(QMessageBox::Critical);
        ErrorMsgBox.setWindowTitle("Ошибка!");
        ErrorMsgBox.setText("Данный набор числе не является перестановкой!");
        ErrorMsgBox.exec();
    }
    else
    {
        std::vector<YoungTable> SYTpair = RSK(permutation);
        ui->InsT->append(QString::fromStdString(SYTpair.at(0).Draw()));
        ui->RecT->append(QString::fromStdString(SYTpair.at(1).Draw()));
        ui->InsRW->setText(QString::fromStdString(SYTpair.at(0).GetReadingWord()));
        ui->RecRW->setText(QString::fromStdString(SYTpair.at(1).GetReadingWord()));
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

void MainWindow::on_pushButton_2_clicked()
{
    ui->InsT->setText("");
    ui->RecT->setText("");
    ui->RecRW->setText("");
    ui->InsRW->setText("");
}

