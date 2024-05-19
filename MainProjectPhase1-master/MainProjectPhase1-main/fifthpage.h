#ifndef FIFTHPAGE_H
#define FIFTHPAGE_H

#include <QDialog>

namespace Ui {
class fifthpage;
}

class fifthpage : public QDialog
{
    Q_OBJECT

public:
    explicit fifthpage(QWidget *parent = nullptr);
    ~fifthpage();

private:
    Ui::fifthpage *ui;
};

#endif // FIFTHPAGE_H
