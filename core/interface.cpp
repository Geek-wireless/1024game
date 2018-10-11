#include "interface.h"
#include "ui_interface.h"

interface::interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::interface)
{
    ui->setupUi(this);

    //former distribute of textbrowser is in chaos,using array to reshape it
    //link array to textbrowser
    //line 1
    textBrower[0][0]=ui->textBrowser;
    textBrower[0][1]=ui->textBrowser_2;
    textBrower[0][2]=ui->textBrowser_3;
    textBrower[0][3]=ui->textBrowser_4;

    //line 2
    textBrower[1][0]=ui->textBrowser_5;
    textBrower[1][1]=ui->textBrowser_6;
    textBrower[1][2]=ui->textBrowser_7;
    textBrower[1][3]=ui->textBrowser_8;

    //line 3
    textBrower[2][0]=ui->textBrowser_16;
    textBrower[2][1]=ui->textBrowser_13;
    textBrower[2][2]=ui->textBrowser_11;
    textBrower[2][3]=ui->textBrowser_9;

    //line 4
    textBrower[3][0]=ui->textBrowser_15;
    textBrower[3][1]=ui->textBrowser_14;
    textBrower[3][2]=ui->textBrowser_12;
    textBrower[3][0]=ui->textBrowser_10;
}

interface::~interface()
{
    delete ui;
}

/**
 * @brief interface::showGame
 * refresh the data showed on interface
 * @param form
 * 2d array of data of each textbrowser
 * from class data::data[8][8] only
 */
void interface::showGame(qint32 **form)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(form[i][j])
            {
                textBrower[i][j]->setFontPointSize(36);
                textBrower[i][j]->setText(QString::number(form[i][j]));
            }
            else
            {
                textBrower[i][j]->setFontPointSize(36);
                textBrower[i][j]->setText(" ");
            }
        }
    }
}

void interface::on_pushButton_clicked()
{

}
