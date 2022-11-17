#ifndef MSG_H
#define MSG_H

#include <QDialog>

namespace Ui {
class msg;
}

class msg : public QDialog
{
    Q_OBJECT

public:
    explicit msg(QWidget *parent = nullptr);
    ~msg();

private slots:
    void on_pushButton_clicked();

private:
    Ui::msg *ui;
};

#endif // MSG_H
