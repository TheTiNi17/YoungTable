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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QMessageBox ErrorMsgBox;
    bool isPermutation(std::vector<int> vec);
    std::vector<YoungTable> RSK(std::vector<int> permutation);
    std::vector<int> StringToVec(std::string str);
};
#endif // MAINWINDOW_H
