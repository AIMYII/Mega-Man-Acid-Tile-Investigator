#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);

    // MANUALLY CONNECT IT HERE
    connect(ui->actionShow_Log, &QAction::triggered, this, &MainWindow::on_actionShow_Log_triggered);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_actionShow_Log_triggered() {
    QMessageBox::information(this, "About", "About");
}

