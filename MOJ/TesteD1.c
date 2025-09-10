#include <stdio.h>

int main ()
{
    long long H, M, S;
    scanf("%lld",&H);
    M = H*60;
    S = M*60;
    printf("%lld\n%lld\n",M,S);
    return 0;
}