#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <cstdlib>
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(0));
    randomNumber = rand() % 100 + 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_guessButton_clicked()
{
    int guess = ui->lineEdit->text().toInt();

    if (guess < randomNumber)
        QMessageBox::information(this, "Result", "Too Low ⬇️");
    else if (guess > randomNumber)
        QMessageBox::information(this, "Result", "Too High ⬆️");
    else {
        QMessageBox::information(this, "Result", "Correct! 🎉");
        randomNumber = rand() % 100 + 1;
        ui->lineEdit->clear();
    }
}
