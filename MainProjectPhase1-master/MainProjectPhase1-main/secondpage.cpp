#include "secondpage.h"
#include "ui_secondpage.h"
#include "QMessageBox"
#include "thirdpage.h"
#include "fifthpage.h"
#include "QSqlError"
#include "QSqlDatabase"
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QDebug"

#include "string.h"
 QString s1 ,s2 , s30, s31 ;
int r,h;

secondPage::secondPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::secondPage)
{
    ui->setupUi(this);
    QSqlDatabase database ;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:\\Users\\cactus.pc\\Desktop\\MainProjectPhase1-main\\MainProjectPhase1-main\\dadeinfo.db");
    database.open();

    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_5->setEchoMode(QLineEdit::Password);
    ui->pushButton->setStyleSheet("border-image: url(:/new/prefix1/photo_2024-04-10_13-29-04.jpg);");
    ui->pushButton_5->setStyleSheet("border-image: url(:/new/prefix1/photo_2024-04-10_13-29-04.jpg);");
    ui->groupBox->hide();
    ui->groupBox_3->hide();
}

void secondPage::on_pushButton_clicked()
{
    r = rand()%6;
    switch (r) {
    case 0:
        ui->label_3->setStyleSheet("image: url(:/new/prefix1/captch1.png);");
        break;
    case 1:
        ui->label_3->setStyleSheet("image: url(:/new/prefix1/captch2.png);");
        break;
    case 2:
        ui->label_3->setStyleSheet("image: url(:/new/prefix1/captch3.png);");
        break;
    case 3:
        ui->label_3->setStyleSheet("image: url(:/new/prefix1/captcha4.jfif);");
        break;
    case 4:
        ui->label_3->setStyleSheet("image: url(:/new/prefix2/photo_2024-04-10_20-12-46.jpg);");
        break;
    case 5:
        ui->label_3->setStyleSheet("image: url(:/new/prefix1/photo_2024-04-10_20-12-46.jpg);");

    }

    ui->groupBox_2->show();
    //ui->pushButton->setEnabled(false);
}


void secondPage::on_pushButton_2_clicked()
{
     //int x;
     int y=0;
     QSqlQuery q ;

     s1= ui->lineEdit->text();
     s2= ui->lineEdit_2->text();
     //QString s3 ;
     //int sw=0 ;
     //q.exec("INSERT INTO dadeinfo(name,password)VALUES( '"+s1+"' ,'"+s2+"' ) ");
     //s3 = q.exec("SELECT password FROM dadeinfo WHERE name= '"+s1+"'");
     /*if (!q.exec("SELECT password FROM dadeinfo WHERE name= '"+s1+"'"))
     {
         qDebug() << "error with query";
         return;
     }*/



      /*if(ui->lineEdit_2->text()==s3)
      {
         sw=1 ;
      }
     else {
          QMessageBox::warning(this,"wrong code","enter the corroct password ","try again!");
          ui->lineEdit_2->setText("");
     }*/

    if (r==0){
        if(ui->lineEdit_3->text()=="PNRHTR")
        {

            y=1;

        }
        else {
            QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
            ui->lineEdit_3->setText("");

        }
    }
    else if(r==1){
        if(ui->lineEdit_3->text()=="W68HP"){

            y=1;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_3->setText("");
        }
    }
    else if (r==2) {
        if(ui->lineEdit_3->text()=="706DE"){

            y=1 ;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_3->setText("");
        }
    }
    else if (r==3) {
        if(ui->lineEdit_3->text()=="SMWM"){

            y=1 ;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_3->setText("");
        }
    }

    else if (r==4) {
        if(ui->lineEdit_3->text()=="WB3CX"){


            y=1 ;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_3->setText("");
        }
    }
    else if (r==5) {
        if(ui->lineEdit_3->text()=="CAPTCHA"){


            y=1 ;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_3->setText("");
        }
    }

    if (y==1)
    {
        fifthpage *w5 = new fifthpage;
        w5->setWindowTitle("fifthpage");
        this->hide();
        w5->show();

    }
}


void secondPage::on_pushButton_6_clicked()
{
     QSqlQuery m ;

    s30= ui->lineEdit_4->text();
    //s31= ui->lineEdit_5->text();
    int b=0 ;
    int c=0 ;

    m.exec("SELECT name FROM dadeinfo WHERE name= '"+s30+"'");
         if(m.first())
         {
             QMessageBox::warning(this, " wrong name " , "کاربری با این نام وجود دارد لطفا نام دیگری انتخاب کنید");
             ui->lineEdit_4->setText("");
         }
         else{
             s31= ui->lineEdit_5->text();
             m.exec("INSERT INTO dadeinfo(name,password)VALUES( '"+s30+"' ,'"+s31+"' ) ");
             b=1;
         }


    //m.exec("INSERT INTO dadeinfo(name,password)VALUES( '"+s30+"' ,'"+s31+"' ) ");

    if (h==0){
        if(ui->lineEdit_6->text()=="PNRHTR"){
             /*thirdpage *w3 = new thirdpage;
             w3->setWindowTitle("thirdPage");
             this->hide();
             w3->show();*/

             c=1;


        }
        else {
            QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
            ui->lineEdit_6->setText("");

        }
    }
    else if(h==1){
        if(ui->lineEdit_6->text()=="W68HP"){
            /*thirdpage *w3 = new thirdpage;
            w3->setWindowTitle("thirdPage");
            this->hide();
            w3->show();*/
             c=1;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_6->setText("");
        }
    }
    else if (h==2) {
        if(ui->lineEdit_6->text()=="706DE"){
            /*thirdpage *w3 = new thirdpage;
            w3->setWindowTitle("thirdPage");
            this->hide();
            w3->show();*/
             c=1;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_6->setText("");
        }
    }
    else if (h==3) {
        if(ui->lineEdit_6->text()=="SMWM"){
            /*thirdpage *w3 = new thirdpage;
            w3->setWindowTitle("thirdPage");
            this->hide();
            w3->show();*/
             c=1;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_6->setText("");
        }
    }
    else if (h==4) {
        if(ui->lineEdit_6->text()=="WB3CX"){
            /*thirdpage *w3 = new thirdpage;
            w3->setWindowTitle("thirdPage");
            this->hide();
            w3->show();*/
             c=1;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_6->setText("");
        }
    }
    else if (h==5) {
        if(ui->lineEdit_6->text()=="CAPTCHA"){
            /*thirdpage *w3 = new thirdpage;
            w3->setWindowTitle("thirdPage");
            this->hide();
            w3->show();*/
             c=1;
        }
        else {
             QMessageBox::warning(this,"wrong code","enter the corroct code the is shown","try again!");
             ui->lineEdit_6->setText("");
        }
    }

    if(b==1&&c==1)
    {
        thirdpage *w3 = new thirdpage;
        w3->setWindowTitle("thirdPage");
        this->hide();
        w3->show();
    }
}


void secondPage::on_pushButton_5_clicked()
{
    h = rand()%6;
    switch (h)
    {
    case 0:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/captch1.png);");
        break;
    case 1:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/captch2.png);");
        break;
    case 2:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/captch3.png);");
        break;
    case 3:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/captcha4.jfif);");
        break;
    case 4:
        ui->label_3->setStyleSheet("image: url(:/new/prefix2/photo_2024-04-10_20-12-46.jpg);");
        break;
    case 5:
        ui->label_3->setStyleSheet("image: url(:/new/prefix1/photo_2024-04-10_20-12-46.jpg);");

    }

    ui->groupBox_4->show();
    //ui->pushButton_5->setEnabled(false);
}

secondPage::~secondPage()
{
    delete ui;
}








