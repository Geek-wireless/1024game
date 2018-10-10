#ifndef DATA_H
#define DATA_H
#include <QApplication>

/**
 * @brief The data class
 * the data of each form
 * data form:
 * 0 1 2 3
 * 4 5 6 7
 * 8 9 10 11
 * 12 13 14 15
 */
class data
{
public:
    data();

private:
    qint32 num[8][8];   //number of each form
    qint8  empty[8][8]; //whether the form is empty,1 empty/0 filled
};

#endif // DATA_H
