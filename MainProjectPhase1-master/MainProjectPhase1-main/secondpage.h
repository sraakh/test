#ifndef SECONDPAGE_H
#define SECONDPAGE_H

#include <QMainWindow>

namespace Ui {
class secondPage;
}

class secondPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit secondPage(QWidget *parent = nullptr);
    ~secondPage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::secondPage *ui;
};

#endif // SECONDPAGE_H
