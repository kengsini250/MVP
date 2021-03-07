#include "presenter.h"

#include <QApplication>

int main(int argc, char *argv[])
{   
    QApplication a(argc, argv);
    Presenter p;
    p.show();
    return a.exec();
}
