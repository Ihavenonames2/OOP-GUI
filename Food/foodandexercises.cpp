#include "foodandexercises.h"
#include "ui_foodandexercises.h"

FoodAndExercises::FoodAndExercises(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FoodAndExercises)
{
    ui->setupUi(this);
    ui->FoodTableWidget->setColumnCount(6);
    ui->FoodTableWidget->setHorizontalHeaderLabels({"Name", "Weight", "Calories", "Fats", "Carbhydr", "Proteins"});

    ui->ExerciseTableWidget->setColumnCount(3);
    ui->ExerciseTableWidget->setHorizontalHeaderLabels({"Name", "Times", "Reps"});
}

FoodAndExercises::~FoodAndExercises()
{
    delete ui;
}

void FoodAndExercises::getFood(const std::vector<Food> &food)
{
    for(const auto& el : food)
    {
        auto rowCount = ui->FoodTableWidget->rowCount();
        ui->FoodTableWidget->insertRow(rowCount);
        ui->FoodTableWidget->setItem(rowCount,0, new QTableWidgetItem(el.get_name().c_str()));
        ui->FoodTableWidget->setItem(rowCount,1, new QTableWidgetItem(std::to_string((std::size_t)el.weight_f).c_str()));
        ui->FoodTableWidget->setItem(rowCount,2, new QTableWidgetItem(std::to_string((std::size_t)el.calories_f).c_str()));
        ui->FoodTableWidget->setItem(rowCount,3, new QTableWidgetItem(std::to_string((std::size_t)el.fats).c_str()));
        ui->FoodTableWidget->setItem(rowCount,4, new QTableWidgetItem(std::to_string((std::size_t)el.carbohydrates).c_str()));
        ui->FoodTableWidget->setItem(rowCount,5, new QTableWidgetItem(std::to_string((std::size_t)el.proteins).c_str()));
    }
}

void FoodAndExercises::getExercises(const std::map<string, std::pair<size_t, size_t> > &exercises)
{
    for(const auto& el : exercises)
    {
        auto rowCount = ui->ExerciseTableWidget->rowCount();
        ui->ExerciseTableWidget->insertRow(rowCount);
        ui->ExerciseTableWidget->setItem(rowCount,0, new QTableWidgetItem(el.first.c_str()));
        ui->ExerciseTableWidget->setItem(rowCount,1, new QTableWidgetItem(std::to_string((std::size_t)el.second.first).c_str()));
        ui->ExerciseTableWidget->setItem(rowCount,2, new QTableWidgetItem(std::to_string((std::size_t)el.second.second).c_str()));
    }
}

void FoodAndExercises::on_CloseButton_clicked()
{
    close();
}

