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

void Dialog::on_spinBox_inputBase_valueChanged(int inputBase)
{
    ui->lineEdit_result->setText(QString::number(
                                     base_conversion(ui->lineEdit_input->text().toLongLong(),
                                                     inputBase,
                                                     ui->spinBox_outputBase->text().toULongLong())
                                     )
                                 );
}

void Dialog::on_spinBox_outputBase_valueChanged(int outputBase)
{
    ui->lineEdit_result->setText(QString::number(
                                     base_conversion(ui->lineEdit_input->text().toLongLong(),
                                                     ui->spinBox_inputBase->text().toULongLong(),
                                                     outputBase)
                                     )
                                 );
}
