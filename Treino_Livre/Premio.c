// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2023f1pj_premio

#include <stdio.h>

int main ()
{
    int paes, doces, bolos, pontos=0;
    char premio = 'N';
    scanf("%d %d %d", &paes, &doces, &bolos);
    pontos+=(paes)+(doces*2)+(bolos*3);
    if(pontos>=100)
        premio='P';
    if(pontos>=120)
        premio='D';
    if(pontos>=150)
        premio='B';

    printf("%c",premio);

    return 0;
}