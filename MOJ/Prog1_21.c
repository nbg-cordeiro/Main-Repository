// Questão "21" Treino Livre - MOJ
#include <stdio.h>
int main ()
{
    char symbol;int value;
    short sum=0;
    short values[13][4];
    for(short i=0; i<4; i++)
    {
        for(short j=0; j<13; j++)
        {
            char ignored;
            scanf("%c%c%c",&symbol,&ignored,&ignored);
            if(symbol>65)
                {value=10;}
            else if(symbol==65)
                {value=1;}
            else 
                {value=symbol-'0';}
            values[j][i]=value;
        }
    }
    for(int i=0; i<11; i++)
    {
        if((sum+values[i][0]) <= 21)
            {sum+=values[i][0];}
        else
            {break;}
    }
    printf("%d",sum);
   return 0;
}