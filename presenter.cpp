#include "presenter.h"
#include "view.h"
#include "model.h"

Presenter::Presenter(QObject *parent):QObject(parent)
{
    view = new View;
    view->bind(this);
    model = new Model;
    model->bind(this);

    connect(view,&View::V2P,model,&Model::P2M);
    connect(model,&Model::M2P,view,&View::print);
    /*
    connect(model,&Model::M2P,[this](const QString& t){
        view->print(t);
    });
    */
}

void Presenter::show()
{
    view->show();
}
