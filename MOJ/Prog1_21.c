// "21" Treino Livre - MOJ
// A program that scans 4 lines of 13 cards and calculates the maximum sum a player can get
// in a game of Black Jack, without exceeding 21 points.
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
            // These many iterations are are super unoptmized, 
            // just because the problem inputs 4 lines of 13 cards,
            // even though it is impossible to blow a hand in Black Jack with more than 11 cards
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
        // Eleven iterations is what it take to get the maximum sum (21) in the worst case
        if((sum+values[i][0]) <= 21)
            {sum+=values[i][0];}
        else
            {break;}
    }
    printf("%d",sum);
   return 0;
}