#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 100 && numero < 200)
    {
        printf("Voce digitou um numero entre 100 e 200");
    }else{
        printf("Voce digitou um numero fora da faixa");
    }
    
    return 0;
}
