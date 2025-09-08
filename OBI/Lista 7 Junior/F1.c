#include <stdio.h>

int main ()
{
    int n,m;
    scanf("%d %d\n",&n,&m);
    char alphabet[1000]={0};
    char phrase[1000]={0};
    int ASCII[129]={0};
    fgets(alphabet, 1000, stdin);
    fgets(phrase, 1000, stdin);
    int i=0;
    while(alphabet[i]!='\0')
    {
        ASCII[alphabet[i]]=1;
        i++;
    }
    i=0;
    while(phrase[i]!='\0')
    {
        if(ASCII[phrase[i]]==0)
        {
            printf("N\n");
            return 0;
        }
        i++;
    }
    
    printf("S\n");
    return 0;
}