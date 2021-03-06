#pragma once

#include <vector>
#include <tuple>
#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication2.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);

public slots:
    void readFile();
    void newFilters();
    void runAnalyze();

private:
    Ui::MainWindow ui;
    std::string current_text;
    std::vector <std::pair<char, std::string>> filters;
    std::vector <std::pair<char, std::string>> union_filters;
};
