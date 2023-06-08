#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <addfood.h>
#include <addexercise.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void updateCalories();
    std::map<std::string, std::pair<std::size_t, std::size_t>> getExercises();

private slots:
    void on_FoodButton_clicked();

    void on_ExerciseButton_clicked();

    void on_OutputButton_clicked();

    void on_SaveButton_clicked();

    void on_ChangeDayButton_clicked();

public slots:
    void reciveFood(const Food& food);

    void reciveBicycle(const Bicycle& bicycle);
    void reciveRun(const Run& run);
    void recivePull_Up(const Pull_Up& pull_Up);
    void recivePush_Up(const Push_Up& push_Up);
    void reciveTwisting(const Twisting& twisting);
    void reciveSquats(const Squats& squats);

signals:
    void sendFood(const std::vector<Food>& food);
    void sendExercises(const std::map<std::string, std::pair<std::size_t, std::size_t>>& exercises);

private:
    Ui::MainWindow *ui;
    Diary diary;
    std::size_t day = 1;
};
#endif // MAINWINDOW_H
