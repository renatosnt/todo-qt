#ifndef TODOAPP_H
#define TODOAPP_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class ToDoApp; }
QT_END_NAMESPACE

class ToDoApp : public QMainWindow
{
    Q_OBJECT

public:
    ToDoApp(QWidget *parent = nullptr);
    QString home = getenv("HOME");
    void start(); // verifies if file in .config
    QString dir = ":/todoapp.db";
    QString user = home + "/.config/mytodo.db";

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    void show_data();
    ~ToDoApp();

private slots:

    void on_actionAbout_triggered();

    void on_actionExit_triggered();

private:
    Ui::ToDoApp *ui;
};
#endif // TODOAPP_H
