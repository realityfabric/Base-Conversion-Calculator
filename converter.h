#ifndef CONVERTER_H
#define CONVERTER_H

#include <QtCore>

qint64 base_conversion (qint64 input, qint64 inputbase, qint64 outputbase);
qint64 decimal2base (qint64 input, double base);
qint64 base2decimal (qint64 input, double base);

#endif
