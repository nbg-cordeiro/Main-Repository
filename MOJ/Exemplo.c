#include <stdio.h>

int main ()
{
    int digitos;
    // suponha que o usuario digitou 123456
    digitos = 123456;
    int algarismo1=digitos%10; // algarismo1 = 6
    digitos/=10; // digitos = 12345
    int algarismo2=digitos%10; // algarismo2 = 5
    digitos/=10; // digitos = 1234
    int algarismo3=digitos%10; // algarismo3 = 4
    digitos/=10; // digitos = 123
    int algarismo4=digitos%10; // algarismo4 = 3
    digitos/=10; // digitos = 12
    int algarismo5=digitos%10; // algarismo5 = 2
    digitos/=10; // digitos = 1
    int algarismo6=digitos%10; // algarismo6 = 1
    digitos/=10; // digitos = 0
    

    printf("%d %d",algarismo1,algarismo2); // imprime 6 e 5
    
    return 0;
}