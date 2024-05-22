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
#include <QtWidgets/QGroupBox>
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
    QWidget *Main;
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
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *InsertionT1;
    QTextEdit *RecordingT1;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QPushButton *UseRWOfPButton;
    QLabel *label_7;
    QPushButton *UseRWOfQButton;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QPushButton *GetReadingWord;
    QPushButton *GetReadingWord_2;
    QPushButton *GetReadingWord_3;
    QPushButton *GetReadingWord_4;
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
        Main = new QWidget();
        Main->setObjectName(QString::fromUtf8("Main"));
        verticalLayout_3 = new QVBoxLayout(Main);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        randPermutationButton = new QPushButton(Main);
        randPermutationButton->setObjectName(QString::fromUtf8("randPermutationButton"));

        horizontalLayout_5->addWidget(randPermutationButton);

        label_6 = new QLabel(Main);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        RandomPermutationSizeLine = new QLineEdit(Main);
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
        RSKButton = new QPushButton(Main);
        RSKButton->setObjectName(QString::fromUtf8("RSKButton"));

        horizontalLayout_2->addWidget(RSKButton);

        label = new QLabel(Main);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        PermutationLine = new QLineEdit(Main);
        PermutationLine->setObjectName(QString::fromUtf8("PermutationLine"));
        PermutationLine->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_2->addWidget(PermutationLine);


        verticalLayout_3->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(Main);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        InsertionT1 = new QTextEdit(groupBox_2);
        InsertionT1->setObjectName(QString::fromUtf8("InsertionT1"));
        InsertionT1->setLayoutDirection(Qt::LeftToRight);
        InsertionT1->setStyleSheet(QString::fromUtf8("QTextEdit *textEdit = new QTextEdit;\n"
"textEdit->setAlignment(Qt::AlignLeft | Qt::AlignTop);"));
        InsertionT1->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        InsertionT1->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        InsertionT1->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        InsertionT1->setLineWrapMode(QTextEdit::WidgetWidth);
        InsertionT1->setReadOnly(true);

        horizontalLayout_3->addWidget(InsertionT1);

        RecordingT1 = new QTextEdit(groupBox_2);
        RecordingT1->setObjectName(QString::fromUtf8("RecordingT1"));
        RecordingT1->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        RecordingT1->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        RecordingT1->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        RecordingT1->setReadOnly(true);

        horizontalLayout_3->addWidget(RecordingT1);


        horizontalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(Main);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_5);

        UseRWOfPButton = new QPushButton(groupBox_3);
        UseRWOfPButton->setObjectName(QString::fromUtf8("UseRWOfPButton"));

        horizontalLayout_8->addWidget(UseRWOfPButton);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_7);

        UseRWOfQButton = new QPushButton(groupBox_3);
        UseRWOfQButton->setObjectName(QString::fromUtf8("UseRWOfQButton"));

        horizontalLayout_8->addWidget(UseRWOfQButton);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_8);

        GetReadingWord = new QPushButton(groupBox_3);
        GetReadingWord->setObjectName(QString::fromUtf8("GetReadingWord"));

        horizontalLayout_10->addWidget(GetReadingWord);

        GetReadingWord_2 = new QPushButton(groupBox_3);
        GetReadingWord_2->setObjectName(QString::fromUtf8("GetReadingWord_2"));

        horizontalLayout_10->addWidget(GetReadingWord_2);

        GetReadingWord_3 = new QPushButton(groupBox_3);
        GetReadingWord_3->setObjectName(QString::fromUtf8("GetReadingWord_3"));

        horizontalLayout_10->addWidget(GetReadingWord_3);

        GetReadingWord_4 = new QPushButton(groupBox_3);
        GetReadingWord_4->setObjectName(QString::fromUtf8("GetReadingWord_4"));

        horizontalLayout_10->addWidget(GetReadingWord_4);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        InsRW = new QLineEdit(groupBox_3);
        InsRW->setObjectName(QString::fromUtf8("InsRW"));
        InsRW->setReadOnly(true);

        horizontalLayout_4->addWidget(InsRW);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        RecRW = new QLineEdit(groupBox_3);
        RecRW->setObjectName(QString::fromUtf8("RecRW"));
        RecRW->setReadOnly(true);

        horizontalLayout_4->addWidget(RecRW);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        clearButton = new QPushButton(Main);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(Main, QString());

        verticalLayout_2->addWidget(tabWidget);

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
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "RSK Result", nullptr));
        InsertionT1->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Reading Word Variations", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Auto-Copy Reading Word of", nullptr));
        UseRWOfPButton->setText(QCoreApplication::translate("MainWindow", "Table P", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "or", nullptr));
        UseRWOfQButton->setText(QCoreApplication::translate("MainWindow", "Table Q", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Copy Reading Word", nullptr));
        GetReadingWord->setText(QCoreApplication::translate("MainWindow", "ReadingWord", nullptr));
        GetReadingWord_2->setText(QCoreApplication::translate("MainWindow", "Reversed ReadingWord", nullptr));
        GetReadingWord_3->setText(QCoreApplication::translate("MainWindow", "Column ReadingWord", nullptr));
        GetReadingWord_4->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276-\320\275\320\270\320\261\321\203\320\264\321\214 \320\265\321\211\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "P Reading Word:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Q Reading Word:", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear RSK Result", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Main), QCoreApplication::translate("MainWindow", "Main", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
