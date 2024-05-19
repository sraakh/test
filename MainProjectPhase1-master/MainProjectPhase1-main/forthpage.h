#ifndef FORTHPAGE_H
#define FORTHPAGE_H

#include <QMainWindow>

namespace Ui {
class forthpage;
}

class forthpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit forthpage(QWidget *parent = nullptr);
    ~forthpage();



private slots:
    void on_pushButton_5_clicked();

private:
    Ui::forthpage *ui;
};

#endif // FORTHPAGE_H
