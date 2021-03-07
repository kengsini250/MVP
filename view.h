#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QString>

#include "presenter.h"

QT_BEGIN_NAMESPACE
namespace Ui { class View; }
QT_END_NAMESPACE

class View : public QMainWindow
{
    Q_OBJECT

public:
    View(QWidget *parent = nullptr);
    ~View(){}
    void bind(Presenter*);
private:
    Ui::View *ui;
    Presenter* p;
public slots:
    void print(const QString&);
signals:
    void V2P(const QString&);
};

#endif // VIEW_H
