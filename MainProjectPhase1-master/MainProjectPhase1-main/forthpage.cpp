#include "forthpage.h"
#include "ui_forthpage.h"
#include "fifthpage.h"

#include "QSqlDatabase"
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

#include "QSqlError"
#include "QDebug"
#include "string.h"

 QString s10 , s11 ,s3 ,s4 ,s5 , s6 , s7 , s8 , s9 ;
forthpage::forthpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::forthpage)
{
    ui->setupUi(this);
    QSqlDatabase database ;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:\\Users\\cactus.pc\\Desktop\\MainProjectPhase1-main\\MainProjectPhase1-main\\dadeinfo.db");
    database.open();

    //border-image: url(:/new/prefix1/photo_2024-03-24_00-23-35.jpg);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
}

forthpage::~forthpage()
{
    delete ui;
}



void forthpage::on_pushButton_5_clicked()
{
    QSqlQuery p ;

    s10= ui->lineEdit_8->text();
    s11= ui->lineEdit_9->text();
    s3= ui->lineEdit->text();
    s4= ui->lineEdit_2->text();
    s5= ui->lineEdit_3->text();
    s6= ui->lineEdit_4->text();
    s7= ui->lineEdit_5->text();
    s8= ui->lineEdit_6->text();
    s9= ui->lineEdit_7->text();
    p.exec("INSERT INTO dadeinfo(name,password,age,job,birth,company,university,startyear,endyear)VALUES(  '"+s10+"' , '"+s11+"' ,'"+s3+"' ,'"+s4+"', '"+s5+"' ,'"+s6+"' , '"+s7+"' , '"+s8+"' , '"+s9+"' ) ");
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();

}

