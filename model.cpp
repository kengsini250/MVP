#include "model.h"

Model::Model(QObject *parent) : QObject(parent)
{

}

void Model::bind(Presenter *p)
{
    this->p=p;
}

void Model::P2M(const QString &t)
{
    QString temp = "\""+t +"\"";
    emit M2P(temp);
}
