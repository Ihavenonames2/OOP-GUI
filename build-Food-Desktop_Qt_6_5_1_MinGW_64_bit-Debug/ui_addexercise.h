/********************************************************************************
** Form generated from reading UI file 'addexercise.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXERCISE_H
#define UI_ADDEXERCISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddExercise
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QLineEdit *TimeslineEdit;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_3;
    QLineEdit *RepslineEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *FoodAddButton;
    QPushButton *FoodCancelButton;

    void setupUi(QDialog *AddExercise)
    {
        if (AddExercise->objectName().isEmpty())
            AddExercise->setObjectName(QString::fromUtf8("AddExercise"));
        AddExercise->resize(600, 500);
        AddExercise->setMinimumSize(QSize(600, 500));
        AddExercise->setMaximumSize(QSize(600, 500));
        verticalLayout_5 = new QVBoxLayout(AddExercise);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(AddExercise);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(AddExercise);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(comboBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        label_2 = new QLabel(AddExercise);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        TimeslineEdit = new QLineEdit(AddExercise);
        TimeslineEdit->setObjectName(QString::fromUtf8("TimeslineEdit"));

        verticalLayout_2->addWidget(TimeslineEdit);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        label_3 = new QLabel(AddExercise);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        RepslineEdit = new QLineEdit(AddExercise);
        RepslineEdit->setObjectName(QString::fromUtf8("RepslineEdit"));

        verticalLayout_3->addWidget(RepslineEdit);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        FoodAddButton = new QPushButton(AddExercise);
        FoodAddButton->setObjectName(QString::fromUtf8("FoodAddButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(FoodAddButton->sizePolicy().hasHeightForWidth());
        FoodAddButton->setSizePolicy(sizePolicy2);
        FoodAddButton->setMinimumSize(QSize(200, 50));

        horizontalLayout_2->addWidget(FoodAddButton);

        FoodCancelButton = new QPushButton(AddExercise);
        FoodCancelButton->setObjectName(QString::fromUtf8("FoodCancelButton"));
        FoodCancelButton->setMinimumSize(QSize(200, 50));

        horizontalLayout_2->addWidget(FoodCancelButton);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(AddExercise);

        QMetaObject::connectSlotsByName(AddExercise);
    } // setupUi

    void retranslateUi(QDialog *AddExercise)
    {
        AddExercise->setWindowTitle(QCoreApplication::translate("AddExercise", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddExercise", "Choose exercise:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AddExercise", "Bicycle", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AddExercise", "Run", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("AddExercise", "Pull Up", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("AddExercise", "Push Up", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("AddExercise", "Twisting", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("AddExercise", "Squats", nullptr));

        label_2->setText(QCoreApplication::translate("AddExercise", "Amount of times:", nullptr));
        label_3->setText(QCoreApplication::translate("AddExercise", "Amount of reps:", nullptr));
        FoodAddButton->setText(QCoreApplication::translate("AddExercise", "Add", nullptr));
        FoodCancelButton->setText(QCoreApplication::translate("AddExercise", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddExercise: public Ui_AddExercise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXERCISE_H
