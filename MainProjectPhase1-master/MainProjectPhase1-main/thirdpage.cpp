#include "thirdpage.h"
#include "ui_thirdpage.h"
#include "QMessageBox"
#include "forthpage.h"

thirdpage::thirdpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::thirdpage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
}

thirdpage::~thirdpage()
{
    delete ui;
}
int a;

void thirdpage::on_pushButton_clicked()
{
    a=rand()%(9999-1000+1)+1000;
    ui->label_2->setText(QString::number(a));
}


void thirdpage::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text()==ui->label_2->text()){
        forthpage *w4 = new forthpage;
        w4->setWindowTitle("forthpage");
        this->hide();
        w4->show();

    } else {
        QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
        ui->lineEdit->setText("");
    }

}

