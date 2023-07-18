#include "widgets.h"
#include "ui_widgets.h"

widgets::widgets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widgets)
{
    ui->setupUi(this);
}

widgets::~widgets()
{
    delete ui;
}

void widgets::on_pushButton_clicked()
{
    hide();
}

