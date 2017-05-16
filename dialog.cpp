#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_lineEdit_input_textChanged(const QString &input)
{
    ui->lineEdit_result->setText(QString::number(
                                     base_conversion(input.toULongLong(),
                                     ui->spinBox_inputBase->text().toULongLong(),
                                     ui->spinBox_outputBase->text().toULongLong()))
                                 );
}
