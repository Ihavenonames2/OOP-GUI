QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addexercise.cpp \
    addfood.cpp \
    foodandexercises.cpp \
    main.cpp \
    mainwindow.cpp \
    sources/Basic_Ex.cpp \
    sources/Bicycle.cpp \
    sources/Diary.cpp \
    sources/EnduranceEx.cpp \
    sources/Exercise.cpp \
    sources/Food.cpp \
    sources/Pull_Up.cpp \
    sources/Push_Up.cpp \
    sources/Run.cpp \
    sources/Squats.cpp \
    sources/Twisting.cpp \
    sources/User.cpp

HEADERS += \
    addexercise.h \
    addfood.h \
    foodandexercises.h \
    headers/BasicEx.h \
    headers/Diary.h \
    headers/Diary.h \
    headers/Dishes.h \
    headers/Dishes.h \
    headers/EnduranceEx.h \
    headers/EnduranceEx.h \
    headers/Exercise.h \
    headers/Exercise.h \
    headers/Type_Basic_Exercises.h \
    headers/Type_Basic_Exercises.h \
    headers/Type_Endurance_Exercises.h \
    headers/Type_Endurance_Exercises.h \
    headers/User.h \
    headers/User.h \
    headers/diares.h \
    headers/diares.h \
    headers/food.h \
    headers/food.h \
    mainwindow.h

FORMS += \
    addexercise.ui \
    addfood.ui \
    foodandexercises.ui \
    mainwindow.ui

TRANSLATIONS += \
    Food_en_150.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qrc.qrc
