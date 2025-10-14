#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int soma_par=0;
    int soma_impar=0;
    do{
        scanf("%d", &N);
        if((N%2)==0)
        {
            soma_par= soma_par+N;
        }
        else if((N%2)==1)
        {
            soma_impar= soma_impar+N;
        }
       }while(N>0);
        printf("%d %d", soma_par, soma_impar);
    
    return 0;
}