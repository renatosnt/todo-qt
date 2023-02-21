#include "todoapp.h"
#include "ui_todoapp.h"

ToDoApp::ToDoApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ToDoApp)
{
    ui->setupUi(this);
}

ToDoApp::~ToDoApp()
{
    delete ui;
}





void ToDoApp::on_actionAbout_triggered()
{
    QMessageBox::about(this, "About", "Information about the app");
}


void ToDoApp::on_actionExit_triggered()
{
    close();
}

