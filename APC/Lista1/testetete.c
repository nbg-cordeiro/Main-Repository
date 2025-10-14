#include <stdio.h>

int main ()
{
    int total = 1;
    int expoente = 2;
    int numero = 5;
    for(int i=0; i < expoente; i++)
    {
        total= total*numero;
    }
    printf("total: %d",total);
    return 0;
}




