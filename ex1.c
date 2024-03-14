#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int num;
    float pol;
    
    printf("Digite um numero inteiro (cm): ");
    scanf("%d", &num);

    pol = num * 0.3937;

    printf("%d cm e igual a %.2f pol", num, pol);


    return 0;
}
