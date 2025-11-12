// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2016f1pj_morango

#include <stdio.h>

int main ()
{
    int comprimento, largura;
    scanf("%d %d", &comprimento, &largura);
    int resposta = comprimento * largura;

    scanf("%d %d", &comprimento, &largura);
    if(comprimento * largura > resposta)
        resposta = comprimento * largura;

    printf("%d", resposta);

    return 0;
}