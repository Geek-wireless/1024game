#ifndef INTERFACE_H
#define INTERFACE_H
#include <QApplication>
#include <QWidget>
#include <QTextBrowser>
namespace Ui {
class interface;
}

class interface : public QWidget
{
    Q_OBJECT

public:
    explicit interface(QWidget *parent = 0);
    ~interface();
    void showGame(qint32 **form);
private slots:
    void on_pushButton_clicked();

private:
    Ui::interface *ui;
    QTextBrowser *textBrower[4][4]; //4x4textbrower
};

#endif // INTERFACE_H
