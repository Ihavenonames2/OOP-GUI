#ifndef FOODANDEXERCISES_H
#define FOODANDEXERCISES_H

#include <QDialog>
#include "headers/Diary.h"

namespace Ui {
class FoodAndExercises;
}

class FoodAndExercises : public QDialog
{
    Q_OBJECT

public:
    explicit FoodAndExercises(QWidget *parent = nullptr);
    ~FoodAndExercises();

public slots:
    void getFood(const std::vector<Food>& food);
    void getExercises(const std::map<std::string, std::pair<std::size_t, std::size_t>>& exercises);

private slots:
    void on_CloseButton_clicked();

private:
    Ui::FoodAndExercises *ui;
};

#endif // FOODANDEXERCISES_H
