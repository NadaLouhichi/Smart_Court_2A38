#include "msg.h"
#include "ui_msg.h"
#include<QMessageBox>
msg::msg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::msg)
{
    ui->setupUi(this);
}

msg::~msg()
{
    delete ui;
}

void msg::on_pushButton_clicked()
{
    QMessageBox::about(this,"My Title","This is my coustm message " );
}
