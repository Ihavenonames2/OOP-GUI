#include "addexercise.h"
#include "ui_addexercise.h"
#include <QMessageBox>

AddExercise::AddExercise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddExercise)
{
    ui->setupUi(this);
}

AddExercise::~AddExercise()
{
    delete ui;
}

size_t AddExercise::getTimes()
{
    bool flag;
    std::size_t size = ui->TimeslineEdit->text().split(" ")[0].toUInt(&flag);
    if(!flag)
    {
        QMessageBox::warning(this, "Attention","Times must be a number!");
        return 0;
    }
    return size;
}

size_t AddExercise::getReps()
{
    bool flag;
    std::size_t size = ui->RepslineEdit->text().split(" ")[0].toUInt(&flag);
    if(!flag)
    {
        QMessageBox::warning(this, "Attention","Reps must be a number!");
        return 0;
    }
    return size;
}

void AddExercise::on_FoodCancelButton_clicked()
{
    close();
}


void AddExercise::on_comboBox_activated(int index)
{
    index_ = index;
}


void AddExercise::on_FoodAddButton_clicked()
{
    if(index_ == 0)
    {
        Bicycle bicycle(getTimes(), getReps());
        emit sendBicycle(bicycle);
    }
    if(index_ == 1)
    {
        Run run(getTimes(), getReps());
        emit sendRun(run);
    }
    if(index_ == 2)
    {
        Pull_Up pull_Up(getTimes(), getReps());
        emit sendPull_Up(pull_Up);
    }
    if(index_ == 3)
    {
        Push_Up push_Up(getTimes(), getReps());
        emit sendPush_Up(push_Up);
    }
    if(index_ == 4)
    {
        Twisting twisting(getTimes(), getReps());
        emit sendTwisting(twisting);
    }
    if(index_ == 5)
    {
        Squats squats(getTimes(), getReps());
        emit sendSquats(squats);
    }
    close();
}

