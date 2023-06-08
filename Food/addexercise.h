#ifndef ADDEXERCISE_H
#define ADDEXERCISE_H

#include <QDialog>
#include "headers/Diary.h"

namespace Ui {
class AddExercise;
}

class AddExercise : public QDialog
{
    Q_OBJECT

public:
    explicit AddExercise(QWidget *parent = nullptr);
    ~AddExercise();

    std::size_t getTimes();
    std::size_t getReps();

private slots:
    void on_FoodCancelButton_clicked();

    void on_comboBox_activated(int index);

    void on_FoodAddButton_clicked();

signals:
    void sendBicycle(const Bicycle& bicycle);
    void sendRun(const Run& run);
    void sendPull_Up(const Pull_Up& bicycle);
    void sendPush_Up(const Push_Up& bicycle);
    void sendTwisting(const Twisting& bicycle);
    void sendSquats(const Squats& bicycle);

private:
    Ui::AddExercise *ui;
    int index_;
};

#endif // ADDEXERCISE_H
