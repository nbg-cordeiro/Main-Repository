/* 
    "Acelerador de Partículas" Treino Livre - MOJ
    A program that simulates a particle accelerator, calculating where
    particles exited the accelerator based on the distance they traveled
*/
#include <stdio.h>
int main()
{
    int distance;
    scanf("%d", &distance);
    distance -= 5;
    for(short i=1; i<4; i++)
    {
        --distance;
        if(!(distance%8))
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}