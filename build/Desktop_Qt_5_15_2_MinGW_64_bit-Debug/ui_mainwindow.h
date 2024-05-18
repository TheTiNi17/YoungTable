/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *randPermutationButton;
    QLabel *label_6;
    QLineEdit *RandomPermutationSizeLine;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *RSKButton;
    QLabel *label;
    QLineEdit *PermutationLine;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *InsT;
    QTextEdit *RecT;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *InsRW;
    QLabel *label_4;
    QLineEdit *RecRW;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        randPermutationButton = new QPushButton(tab);
        randPermutationButton->setObjectName(QString::fromUtf8("randPermutationButton"));

        horizontalLayout_5->addWidget(randPermutationButton);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        RandomPermutationSizeLine = new QLineEdit(tab);
        RandomPermutationSizeLine->setObjectName(QString::fromUtf8("RandomPermutationSizeLine"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RandomPermutationSizeLine->sizePolicy().hasHeightForWidth());
        RandomPermutationSizeLine->setSizePolicy(sizePolicy);
        RandomPermutationSizeLine->setMaximumSize(QSize(90, 16777215));
        RandomPermutationSizeLine->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_5->addWidget(RandomPermutationSizeLine);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        RSKButton = new QPushButton(tab);
        RSKButton->setObjectName(QString::fromUtf8("RSKButton"));

        horizontalLayout_2->addWidget(RSKButton);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        PermutationLine = new QLineEdit(tab);
        PermutationLine->setObjectName(QString::fromUtf8("PermutationLine"));
        PermutationLine->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_2->addWidget(PermutationLine);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        InsT = new QTextEdit(tab);
        InsT->setObjectName(QString::fromUtf8("InsT"));
        InsT->setReadOnly(true);

        horizontalLayout_3->addWidget(InsT);

        RecT = new QTextEdit(tab);
        RecT->setObjectName(QString::fromUtf8("RecT"));
        RecT->setReadOnly(true);

        horizontalLayout_3->addWidget(RecT);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        InsRW = new QLineEdit(centralwidget);
        InsRW->setObjectName(QString::fromUtf8("InsRW"));
        InsRW->setReadOnly(true);

        horizontalLayout_4->addWidget(InsRW);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        RecRW = new QLineEdit(centralwidget);
        RecRW->setObjectName(QString::fromUtf8("RecRW"));
        RecRW->setReadOnly(true);

        horizontalLayout_4->addWidget(RecRW);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        randPermutationButton->setText(QCoreApplication::translate("MainWindow", "Get Random Permutation", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Size:", nullptr));
        RSKButton->setText(QCoreApplication::translate("MainWindow", "RSK", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Permutation:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "RSK Result:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Reading Word", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Reading Word", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
