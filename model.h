#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "presenter.h"

class Model : public QObject
{
    Q_OBJECT
public:
    Model(QObject *parent = nullptr);
    ~Model(){}
    void bind(Presenter*);
private:
    Presenter* p;

public slots:
    void P2M(const QString&);
signals:
    void M2P(const QString&);

};

#endif // MODEL_H
