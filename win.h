
#ifndef WIN_H
#define WIN_H

#include <QtGui>
#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QTextCodec>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>


class Win : public QWidget
{
    Q_OBJECT
public:
    Win(QWidget *parent = 0); // конструктор

protected:
    QTextCodec *codec;
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QLabel *outputLabel;
    QLineEdit *outputEdit;
    QPushButton *nextButton;
    QPushButton *exitButton;

public slots:
    void begin();
    void calc();
};

class StrValidator : public QValidator {
public:
    StrValidator(QObject *parent) : QValidator(parent) { }
    virtual State validate(QString &str,int &pos)const {
        return Acceptable;
    }
};

#endif // WIN_H



