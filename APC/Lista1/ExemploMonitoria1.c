#include <stdio.h>
int main ()
{
    long long CPF;
    int N[11];
    int soma;
    soma = 0;
    int primeiro_digito;
    int segundo_digito;
    int peso;
    scanf("%lld", &CPF);
    for(int i = 0; i<11; i++)
    {
        N[i] = CPF%10;
        CPF = CPF/10;
    }
    
    for(int i = 2; i<11; i++)
    {
        peso = i;
        soma += peso*N[i];
    }
    primeiro_digito = soma%11;
    primeiro_digito = 11-primeiro_digito;
        if(primeiro_digito>9)
        {
            primeiro_digito = 0;
        }
    if(primeiro_digito != N[1])
    {
        printf("invalido");
        return 0;
    }
    soma = 0;
    for(int i = 1; i <11; i++)
    {
        peso = i+2;
        soma += peso*N[i];
    }
    segundo_digito = soma%11;
    segundo_digito = 11-segundo_digito;
       
    if(segundo_digito > 9)
    {
        segundo_digito = 0;
    }
    if(segundo_digito != N[0])
    {
        printf("invalido");
        return 0;
    }
    printf("valido");
    return 0;
}