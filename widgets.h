#ifndef WIDGETS_H
#define WIDGETS_H

#include <QWidget>

namespace Ui {
class widgets;
}

class widgets : public QWidget
{
    Q_OBJECT

public:
    explicit widgets(QWidget *parent = nullptr);
    ~widgets();

private slots:
    void on_pushButton_clicked();

private:
    Ui::widgets *ui;
};

#endif // WIDGETS_H
