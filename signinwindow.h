#ifndef SIGNINWINDOW_H
#define SIGNINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include <string>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class SignInWindow; }
QT_END_NAMESPACE

class SignInWindow : public QMainWindow
{
    Q_OBJECT

public:
    int balance;
    SignInWindow(QWidget *parent = nullptr);
    ~SignInWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SignInWindow *ui;
    int size;
    string* names;
    string* passwords;

};
#endif // SIGNINWINDOW_H
