/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *Bar;
    QPushButton *OutputButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Daylabel;
    QPushButton *ChangeDayButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *CaloriesLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *FoodButton;
    QPushButton *ExerciseButton;
    QPushButton *SaveButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1026, 601);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, 10, 20, 10);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(50);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(50, -1, 50, -1);
        Bar = new QProgressBar(centralwidget);
        Bar->setObjectName(QString::fromUtf8("Bar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Bar->sizePolicy().hasHeightForWidth());
        Bar->setSizePolicy(sizePolicy);
        Bar->setLayoutDirection(Qt::LeftToRight);
        Bar->setAutoFillBackground(false);
        Bar->setStyleSheet(QString::fromUtf8(""));
        Bar->setValue(24);
        Bar->setOrientation(Qt::Vertical);
        Bar->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_3->addWidget(Bar);


        verticalLayout_2->addLayout(horizontalLayout_3);

        OutputButton = new QPushButton(centralwidget);
        OutputButton->setObjectName(QString::fromUtf8("OutputButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(OutputButton->sizePolicy().hasHeightForWidth());
        OutputButton->setSizePolicy(sizePolicy1);
        OutputButton->setMinimumSize(QSize(0, 50));
        OutputButton->setBaseSize(QSize(100, 100));
        OutputButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(OutputButton);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Daylabel = new QLabel(centralwidget);
        Daylabel->setObjectName(QString::fromUtf8("Daylabel"));

        horizontalLayout_2->addWidget(Daylabel);

        ChangeDayButton = new QPushButton(centralwidget);
        ChangeDayButton->setObjectName(QString::fromUtf8("ChangeDayButton"));

        horizontalLayout_2->addWidget(ChangeDayButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        CaloriesLabel = new QLabel(centralwidget);
        CaloriesLabel->setObjectName(QString::fromUtf8("CaloriesLabel"));
        CaloriesLabel->setLayoutDirection(Qt::LeftToRight);
        CaloriesLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(CaloriesLabel);

        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(13);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FoodButton = new QPushButton(centralwidget);
        FoodButton->setObjectName(QString::fromUtf8("FoodButton"));
        FoodButton->setMinimumSize(QSize(120, 120));
        FoodButton->setMaximumSize(QSize(300, 300));
        FoodButton->setBaseSize(QSize(100, 100));
        FoodButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(FoodButton);

        ExerciseButton = new QPushButton(centralwidget);
        ExerciseButton->setObjectName(QString::fromUtf8("ExerciseButton"));
        ExerciseButton->setMinimumSize(QSize(120, 120));
        ExerciseButton->setMaximumSize(QSize(300, 300));
        ExerciseButton->setBaseSize(QSize(100, 100));
        ExerciseButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(ExerciseButton);


        verticalLayout->addLayout(horizontalLayout);

        SaveButton = new QPushButton(centralwidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(SaveButton);


        horizontalLayout_4->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1026, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        OutputButton->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        Daylabel->setText(QCoreApplication::translate("MainWindow", "Day 1", nullptr));
        ChangeDayButton->setText(QCoreApplication::translate("MainWindow", "Change day", nullptr));
        CaloriesLabel->setText(QCoreApplication::translate("MainWindow", "Calories", nullptr));
        FoodButton->setText(QCoreApplication::translate("MainWindow", "Add food", nullptr));
        ExerciseButton->setText(QCoreApplication::translate("MainWindow", "Add exercise", nullptr));
        SaveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
