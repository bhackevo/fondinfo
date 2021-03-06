﻿#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>

class Notepad : public QWidget {
    Q_OBJECT
    
public:
    Notepad(QWidget *parent = 0);
    ~Notepad();

public slots:   // special methods, to connect with signals
    void open();
    void save();
    void exit();

private:
    QTextEdit* text_edit;
    QPushButton* open_button;
    QPushButton* save_button;
    QPushButton* exit_button;
};

#endif // NOTEPAD_H
