#include "messages.h"
#include "ui_messages.h"

messages::messages(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::messages)
{
    ui->setupUi(this);
}

messages::~messages()
{
    delete ui;
}
