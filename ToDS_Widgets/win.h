
#ifndef WIN_H
#define WIN_H
#include <QtGui>
#include <QPushButton>

#include <QWidget>
#include <QObject>
#include <QTextCodec>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>

class Win : public QWidget {

    Q_OBJECT

public:
    Win();

protected:
    QTextCodec *codec;
    QFrame *frame; // рамка
    QLabel *inputLabel; // метка ввода
    QLineEdit *inputEdit; // строчный редактор ввода
    QLabel *outputLabel; // метка вывода
    QLineEdit *outputEdit; // строчный редактор вывода
    QPushButton *nextButton; // кнопка Следующее
    QPushButton *exitButton; // кнопка Выход

private:

signals:

};

#endif // WIN_H
