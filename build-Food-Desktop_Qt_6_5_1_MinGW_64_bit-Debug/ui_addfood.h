/********************************************************************************
** Form generated from reading UI file 'addfood.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFOOD_H
#define UI_ADDFOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddFood
{
public:
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *FoodNameLabel;
    QLineEdit *FoodNameLineEdit;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *FoodWeightLabel;
    QLineEdit *FoodWeightLineEdit;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *FoodCaloriesLabel;
    QLineEdit *FoodCaloriesLineEdit;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *FoodFatsLabel;
    QLineEdit *FoodFatsLineEdit;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *FoodCarbohydratesLabel;
    QLineEdit *FoodCarbohydratesLineEdit;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *FoodProteinsLabel;
    QLineEdit *FoodProteinsLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *FoodAddButton;
    QPushButton *FoodCancelButton;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QDialog *AddFood)
    {
        if (AddFood->objectName().isEmpty())
            AddFood->setObjectName(QString::fromUtf8("AddFood"));
        AddFood->resize(600, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddFood->sizePolicy().hasHeightForWidth());
        AddFood->setSizePolicy(sizePolicy);
        AddFood->setMinimumSize(QSize(600, 600));
        AddFood->setMaximumSize(QSize(600, 600));
        verticalLayout_8 = new QVBoxLayout(AddFood);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        FoodNameLabel = new QLabel(AddFood);
        FoodNameLabel->setObjectName(QString::fromUtf8("FoodNameLabel"));

        verticalLayout->addWidget(FoodNameLabel);

        FoodNameLineEdit = new QLineEdit(AddFood);
        FoodNameLineEdit->setObjectName(QString::fromUtf8("FoodNameLineEdit"));
        FoodNameLineEdit->setMinimumSize(QSize(0, 24));
        FoodNameLineEdit->setMaximumSize(QSize(16777215, 24));

        verticalLayout->addWidget(FoodNameLineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        FoodWeightLabel = new QLabel(AddFood);
        FoodWeightLabel->setObjectName(QString::fromUtf8("FoodWeightLabel"));

        verticalLayout_2->addWidget(FoodWeightLabel);

        FoodWeightLineEdit = new QLineEdit(AddFood);
        FoodWeightLineEdit->setObjectName(QString::fromUtf8("FoodWeightLineEdit"));
        FoodWeightLineEdit->setMinimumSize(QSize(0, 24));
        FoodWeightLineEdit->setMaximumSize(QSize(16777215, 24));

        verticalLayout_2->addWidget(FoodWeightLineEdit);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout_7->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        FoodCaloriesLabel = new QLabel(AddFood);
        FoodCaloriesLabel->setObjectName(QString::fromUtf8("FoodCaloriesLabel"));

        verticalLayout_3->addWidget(FoodCaloriesLabel);

        FoodCaloriesLineEdit = new QLineEdit(AddFood);
        FoodCaloriesLineEdit->setObjectName(QString::fromUtf8("FoodCaloriesLineEdit"));
        FoodCaloriesLineEdit->setMinimumSize(QSize(0, 24));
        FoodCaloriesLineEdit->setMaximumSize(QSize(16777215, 24));

        verticalLayout_3->addWidget(FoodCaloriesLineEdit);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        FoodFatsLabel = new QLabel(AddFood);
        FoodFatsLabel->setObjectName(QString::fromUtf8("FoodFatsLabel"));

        verticalLayout_4->addWidget(FoodFatsLabel);

        FoodFatsLineEdit = new QLineEdit(AddFood);
        FoodFatsLineEdit->setObjectName(QString::fromUtf8("FoodFatsLineEdit"));
        FoodFatsLineEdit->setMinimumSize(QSize(0, 24));
        FoodFatsLineEdit->setMaximumSize(QSize(16777215, 24));

        verticalLayout_4->addWidget(FoodFatsLineEdit);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        FoodCarbohydratesLabel = new QLabel(AddFood);
        FoodCarbohydratesLabel->setObjectName(QString::fromUtf8("FoodCarbohydratesLabel"));

        verticalLayout_5->addWidget(FoodCarbohydratesLabel);

        FoodCarbohydratesLineEdit = new QLineEdit(AddFood);
        FoodCarbohydratesLineEdit->setObjectName(QString::fromUtf8("FoodCarbohydratesLineEdit"));
        FoodCarbohydratesLineEdit->setMinimumSize(QSize(0, 24));
        FoodCarbohydratesLineEdit->setMaximumSize(QSize(16777215, 24));

        verticalLayout_5->addWidget(FoodCarbohydratesLineEdit);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        FoodProteinsLabel = new QLabel(AddFood);
        FoodProteinsLabel->setObjectName(QString::fromUtf8("FoodProteinsLabel"));

        verticalLayout_6->addWidget(FoodProteinsLabel);

        FoodProteinsLineEdit = new QLineEdit(AddFood);
        FoodProteinsLineEdit->setObjectName(QString::fromUtf8("FoodProteinsLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FoodProteinsLineEdit->sizePolicy().hasHeightForWidth());
        FoodProteinsLineEdit->setSizePolicy(sizePolicy1);
        FoodProteinsLineEdit->setMinimumSize(QSize(0, 24));
        FoodProteinsLineEdit->setMaximumSize(QSize(16777215, 24));

        verticalLayout_6->addWidget(FoodProteinsLineEdit);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FoodAddButton = new QPushButton(AddFood);
        FoodAddButton->setObjectName(QString::fromUtf8("FoodAddButton"));
        FoodAddButton->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(FoodAddButton);

        FoodCancelButton = new QPushButton(AddFood);
        FoodCancelButton->setObjectName(QString::fromUtf8("FoodCancelButton"));
        FoodCancelButton->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(FoodCancelButton);


        verticalLayout_8->addLayout(horizontalLayout);

        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_8);


        retranslateUi(AddFood);

        QMetaObject::connectSlotsByName(AddFood);
    } // setupUi

    void retranslateUi(QDialog *AddFood)
    {
        AddFood->setWindowTitle(QCoreApplication::translate("AddFood", "Dialog", nullptr));
        FoodNameLabel->setText(QCoreApplication::translate("AddFood", "Food name:", nullptr));
        FoodWeightLabel->setText(QCoreApplication::translate("AddFood", "Weight:", nullptr));
        FoodCaloriesLabel->setText(QCoreApplication::translate("AddFood", "Calories:", nullptr));
        FoodFatsLabel->setText(QCoreApplication::translate("AddFood", "Fats:", nullptr));
        FoodCarbohydratesLabel->setText(QCoreApplication::translate("AddFood", "Carbohydrates:", nullptr));
        FoodProteinsLabel->setText(QCoreApplication::translate("AddFood", "Proteins:", nullptr));
        FoodAddButton->setText(QCoreApplication::translate("AddFood", "Add", nullptr));
        FoodCancelButton->setText(QCoreApplication::translate("AddFood", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddFood: public Ui_AddFood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFOOD_H
