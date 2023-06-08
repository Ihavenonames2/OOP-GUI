/********************************************************************************
** Form generated from reading UI file 'foodandexercises.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODANDEXERCISES_H
#define UI_FOODANDEXERCISES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FoodAndExercises
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTableWidget *FoodTableWidget;
    QTableWidget *ExerciseTableWidget;
    QSpacerItem *verticalSpacer;
    QPushButton *CloseButton;

    void setupUi(QDialog *FoodAndExercises)
    {
        if (FoodAndExercises->objectName().isEmpty())
            FoodAndExercises->setObjectName(QString::fromUtf8("FoodAndExercises"));
        FoodAndExercises->resize(922, 549);
        verticalLayout = new QVBoxLayout(FoodAndExercises);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FoodTableWidget = new QTableWidget(FoodAndExercises);
        FoodTableWidget->setObjectName(QString::fromUtf8("FoodTableWidget"));
        FoodTableWidget->setMinimumSize(QSize(600, 0));

        horizontalLayout->addWidget(FoodTableWidget);

        ExerciseTableWidget = new QTableWidget(FoodAndExercises);
        ExerciseTableWidget->setObjectName(QString::fromUtf8("ExerciseTableWidget"));

        horizontalLayout->addWidget(ExerciseTableWidget);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        CloseButton = new QPushButton(FoodAndExercises);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(CloseButton);


        retranslateUi(FoodAndExercises);

        QMetaObject::connectSlotsByName(FoodAndExercises);
    } // setupUi

    void retranslateUi(QDialog *FoodAndExercises)
    {
        FoodAndExercises->setWindowTitle(QCoreApplication::translate("FoodAndExercises", "Dialog", nullptr));
        CloseButton->setText(QCoreApplication::translate("FoodAndExercises", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FoodAndExercises: public Ui_FoodAndExercises {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODANDEXERCISES_H
