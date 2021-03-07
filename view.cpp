#include "view.h"
#include "ui_view.h"

View::View(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::View)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,[this]{
        emit V2P(ui->lineEdit->text());
    });
}

void View::bind(Presenter *p)
{
    this->p=p;
}

void View::print(const QString &t)
{
    ui->lineEdit->clear();
    ui->textEdit->append(t);
}
