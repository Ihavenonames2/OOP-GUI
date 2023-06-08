#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <foodandexercises.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Bar->setMinimum(0);
    ui->Bar->setMaximum(100);
    ui->Bar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateCalories()
{
    QString calories = QString::number(diary.getCalories());
    ui->CaloriesLabel->setText(calories);
    int cal = diary.getCalories() * 100 / 4000;
    if(cal <= 0)
        ui->Bar->setValue(0);
    else
        ui->Bar->setValue(cal);
}

std::map<string, std::pair<size_t, size_t> > MainWindow::getExercises()
{
    std::map<std::string, std::pair<std::size_t, std::size_t>> exercises;

    for(const auto& el : diary.getBicycle())
    {
        exercises.emplace("Bicycle", std::pair<std::size_t, std::size_t>(el.Get_my_distance(), el.Get_my_repeat()));
    }
    for(const auto& el : diary.getRun())
    {
        exercises.emplace("Run", std::pair<std::size_t, std::size_t>(el.Get_my_distance(), el.Get_my_repeat()));
    }
    for(const auto& el : diary.getPull_Up())
    {
        exercises.emplace("Pull Up", std::pair<std::size_t, std::size_t>(el.Get_my_times(), el.Get_my_repeat()));
    }
    for(const auto& el : diary.getPush_Up())
    {
        exercises.emplace("Push Up", std::pair<std::size_t, std::size_t>(el.Get_my_times(), el.Get_my_repeat()));
    }
    for(const auto& el : diary.getTwisting())
    {
        exercises.emplace("Twisting", std::pair<std::size_t, std::size_t>(el.Get_my_times(), el.Get_my_repeat()));
    }
    for(const auto& el : diary.getSquats())
    {
        exercises.emplace("Squats", std::pair<std::size_t, std::size_t>(el.Get_my_times(), el.Get_my_repeat()));
    }

    return exercises;
}

void MainWindow::on_FoodButton_clicked()
{
    auto addDialog = new AddFood();
    addDialog->show();
    connect(addDialog, &AddFood::sendFood, this, &MainWindow::reciveFood);
    if(!addDialog->isVisible())
        delete(addDialog);
}


void MainWindow::on_ExerciseButton_clicked()
{
    auto addDialog = new AddExercise();
    addDialog->show();
    connect(addDialog, &AddExercise::sendBicycle, this, &MainWindow::reciveBicycle);
    connect(addDialog, &AddExercise::sendRun, this, &MainWindow::reciveRun);
    connect(addDialog, &AddExercise::sendPull_Up, this, &MainWindow::recivePull_Up);
    connect(addDialog, &AddExercise::sendPush_Up, this, &MainWindow::recivePush_Up);
    connect(addDialog, &AddExercise::sendTwisting, this, &MainWindow::reciveTwisting);
    connect(addDialog, &AddExercise::sendSquats, this, &MainWindow::reciveSquats);
    if(!addDialog->isVisible())
        delete(addDialog);
}

void MainWindow::reciveFood(const Food &food)
{
    diary.addFood(food);
    updateCalories();
}

void MainWindow::reciveBicycle(const Bicycle &bicycle)
{
    diary.addBicycle(bicycle);
    updateCalories();
}

void MainWindow::reciveRun(const Run &run)
{
    diary.addRun(run);
    updateCalories();
}

void MainWindow::recivePull_Up(const Pull_Up &pull_Up)
{
    diary.addPull_Up(pull_Up);
    updateCalories();
}

void MainWindow::recivePush_Up(const Push_Up &push_Up)
{
    diary.addPush_Up(push_Up);
    updateCalories();
}

void MainWindow::reciveTwisting(const Twisting &twisting)
{
    diary.addTwisting(twisting);
    updateCalories();
}

void MainWindow::reciveSquats(const Squats &squats)
{
    diary.addSquats(squats);
    updateCalories();
}


void MainWindow::on_OutputButton_clicked()
{
    auto addDialog = new FoodAndExercises();
    connect(this, &MainWindow::sendFood, addDialog, &FoodAndExercises::getFood);
    connect(this, &MainWindow::sendExercises, addDialog, &FoodAndExercises::getExercises);

    auto food = diary.getFood();
    emit sendFood(food);

    auto exercises = getExercises();
    emit sendExercises(exercises);

    addDialog->show();
}


void MainWindow::on_SaveButton_clicked()
{
    diary.parse();
}


void MainWindow::on_ChangeDayButton_clicked()
{
    diary.setDate(++day);
    std::string dayText("Day " + std::to_string(day));
    ui->Daylabel->setText(dayText.c_str());
    diary.clear();
    updateCalories();
}

