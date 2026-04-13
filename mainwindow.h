#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public  QMainWindow {
    Q_OBJECT

public:
    explicit  MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void on_actionShow_Log_triggered();

private:
    Ui::MainWindow *ui;
};

#endif //ACID_TILE_INVESTIGATOR_MAINWINDOW_H
