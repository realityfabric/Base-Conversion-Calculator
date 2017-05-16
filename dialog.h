#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include "converter.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_lineEdit_input_textChanged(const QString &input);

    void on_spinBox_inputBase_valueChanged(int inputBase);

    void on_spinBox_outputBase_valueChanged(int outputBase);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
