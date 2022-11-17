#ifndef MESSAGES_H
#define MESSAGES_H

#include <QDialog>

namespace Ui {
class messages;
}

class messages : public QDialog
{
    Q_OBJECT

public:
    explicit messages(QWidget *parent = nullptr);
    ~messages();

private:
    Ui::messages *ui;
};

#endif // MESSAGES_H
