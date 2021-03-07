#ifndef PRESENTER_H
#define PRESENTER_H

#include <QObject>
#include <QString>
#include <QDebug>

class View;
class Model;
class Presenter : public QObject
{
    Q_OBJECT
public:
    Presenter(QObject *parent = nullptr);
    void show();
private:
    View* view;
    Model* model;
};

#endif // PRESENTER_H
