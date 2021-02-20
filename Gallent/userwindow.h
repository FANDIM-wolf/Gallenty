#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QWidget>

namespace Ui {
class userwindow;
}

class userwindow : public QWidget
{
    Q_OBJECT

public:
    explicit userwindow(QWidget *parent = nullptr);
    ~userwindow();

private:
    Ui::userwindow *userwindowui; // to get data from second window
};

#endif // USERWINDOW_H
