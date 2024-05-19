#include "fifthpage.h"
#include "ui_fifthpage.h"

fifthpage::fifthpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fifthpage)
{
    ui->setupUi(this);

    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
}

fifthpage::~fifthpage()
{
    delete ui;
}
