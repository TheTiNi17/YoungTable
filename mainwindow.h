#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sstream>
#include <string>
#include <QRegExpValidator>
#include <QMessageBox>
#include "youngtable.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_clearButton_clicked();

    void on_RSKButton_clicked();

    void on_randPermutationButton_clicked();

    void on_GetReadingWord_clicked();

    void on_GetReadingWord_2_clicked();

    void on_GetReadingWord_3_clicked();

private:
    Ui::MainWindow *ui;
    QMessageBox ErrorMsgBox;
    bool isPermutation(std::vector<int> vec);
    std::vector<YoungTable> SYT_pair;
    std::vector<YoungTable> RSK(std::vector<int> permutation);
    std::vector<int> StrToVec(std::string str);
    std::string VecToStr(std::vector<int> vec);
    std::vector<int> RandomPermutation(int size);
};
#endif // MAINWINDOW_H
