// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2015f1pj_premio

#include <stdio.h>

int main ()
{
    int n, soma=0, dias=1,doacao;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &doacao);
        soma+=doacao;
        if(soma<1000000)
            dias++;
    }

    printf("%d\n", dias);

    return 0;
}