#include "mainwindow.h"
#include <QFile>
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Food_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    QFile styleF(":/style.css");
    styleF.open(QFile::ReadOnly);
    a.setStyleSheet(styleF.readAll());

    MainWindow w;
    w.show();
    return a.exec();
}
