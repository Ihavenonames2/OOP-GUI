#ifndef ADDFOOD_H
#define ADDFOOD_H

#include <QDialog>
#include "headers/Diary.h"

namespace Ui {
class AddFood;
}

class AddFood : public QDialog
{
    Q_OBJECT

public:
    explicit AddFood(QWidget *parent = nullptr);
    ~AddFood();

    std::string getName();
    std::size_t getWeight();
    std::size_t getCalories();
    std::size_t getFats();
    std::size_t getCarbohydrates();
    std::size_t getProteins();

private slots:
    void on_FoodCancelButton_clicked();

    void on_FoodAddButton_clicked();

signals:
    void sendFood(const Food& food);

private:
    Ui::AddFood *ui;
};

#endif // ADDFOOD_H
