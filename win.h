#ifndef window_h
#define window_h
#include <QtGui>
#include "area.h"
#include <QTextCodec>
#include <QPushButton>
#include <QVBoxLayout>

class Window : public QWidget
{
protected:
    QTextCodec *codec;
    Area * area; // область отображения рисунка
    QPushButton * btn;
public:
    Window();
};
#endif
