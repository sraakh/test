#ifndef THIRDPAGE_H
#define THIRDPAGE_H

#include <QMainWindow>

namespace Ui {
class thirdpage;
}

class thirdpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit thirdpage(QWidget *parent = nullptr);
    ~thirdpage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::thirdpage *ui;
};

#endif // THIRDPAGE_H
