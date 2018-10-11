#include "data.h"

data::data()
{

}

void data::initGame()
{
    //inital form with 0
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            num[i][j]=0;
            empty[i][j]=0;
        }
    }

}
