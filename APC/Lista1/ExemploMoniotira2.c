#include <stdio.h>
int main ()
{
    long long int CPF;
    long int n[11];
    int soma;
     soma = 0;
    int peso;
    
    
    scanf("%lld", &CPF);
    for(int i=0 ;i <11; i++)
    {
        n[i] = CPF%10;
        CPF/=10;
    }
    for(int i=2 ;i <11; i++)
    {
        peso = i;
        soma += (peso*n[i]);
    }
    int primeiro_digito = soma%11;
    primeiro_digito = 11-primeiro_digito;
    if(primeiro_digito > 9)
    {
        primeiro_digito = 0;
    }
    if(primeiro_digito != n[1])
        {
            printf("invalido");
            return 0;
        }
    soma = 0;
    for(int i = 1;i<11; i++)
    {
        peso =i+1;
        soma += (peso*n[i]);
    }
    int segundo_digito = soma%11;
    segundo_digito = 11 - segundo_digito;
    if(segundo_digito>9)
    {
        segundo_digito = 0;
    }
    if(segundo_digito != n[0])
    {
        printf("invalido");
    }
        printf("valido");
    return 0;
}