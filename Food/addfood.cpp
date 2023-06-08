#include "addfood.h"
#include "ui_addfood.h"
#include <QMessageBox>

AddFood::AddFood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFood)
{
    ui->setupUi(this);
}

AddFood::~AddFood()
{
    delete ui;
}

string AddFood::getName()
{
    std::string name = ui->FoodNameLineEdit->text().toStdString();
    return name;
}

size_t AddFood::getWeight()
{
    bool flag;
    std::size_t size = ui->FoodWeightLineEdit->text().split(" ")[0].toUInt(&flag);
    if(!flag)
    {
        QMessageBox::warning(this, "Attention","Weight must be a number!");
        return 0;
    }
    return size;
}

size_t AddFood::getCalories()
{
    bool flag;
    std::size_t size = ui->FoodCaloriesLineEdit->text().split(" ")[0].toUInt(&flag);
    if(!flag)
    {
        QMessageBox::warning(this, "Attention","Calories must be a number!");
        return 0;
    }
    return size;
}

size_t AddFood::getFats()
{
    bool flag;
    std::size_t size = ui->FoodFatsLineEdit->text().split(" ")[0].toUInt(&flag);
    if(!flag)
    {
        QMessageBox::warning(this, "Attention","Fats must be a number!");
        return 0;
    }
    return size;
}

size_t AddFood::getCarbohydrates()
{
    bool flag;
    std::size_t size = ui->FoodCarbohydratesLineEdit->text().split(" ")[0].toUInt(&flag);
    if(!flag)
    {
        QMessageBox::warning(this, "Attention","Carbohydrates must be a number!");
        return 0;
    }
    return size;
}

size_t AddFood::getProteins()
{
    bool flag;
    std::size_t size = ui->FoodProteinsLineEdit->text().split(" ")[0].toUInt(&flag);
    if(!flag)
    {
        QMessageBox::warning(this, "Attention","Proteins must be a number!");
        return 0;
    }
    return size;
}

void AddFood::on_FoodCancelButton_clicked()
{
    close();
}


void AddFood::on_FoodAddButton_clicked()
{
    if(ui->FoodNameLineEdit->displayText().isEmpty() |
            ui->FoodWeightLineEdit->displayText().isEmpty() |
            ui->FoodCaloriesLineEdit->displayText().isEmpty() |
            ui->FoodFatsLineEdit->displayText().isEmpty() |
            ui->FoodCarbohydratesLineEdit->displayText().isEmpty() |
            ui->FoodProteinsLineEdit->displayText().isEmpty())
        QMessageBox::warning(this, "Attention","Fill in all the fields!");

    Food food(getWeight(), getCalories(), getFats(), getName(), getCarbohydrates(), getProteins());
    emit sendFood(food);
    close();
}

