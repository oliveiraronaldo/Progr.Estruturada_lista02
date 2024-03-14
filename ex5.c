#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    int num1;
    int num2;
    float num3;
    float produto;
    float soma;
    float potencia;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &num1);

    printf("Digite um numero inteiro: ");
    scanf(" %d", &num2);

    printf("Digite um numero real: ");
    scanf(" %f", &num3);

    produto = (2 * num1) * (num2 / 2);
    soma = (3 * num1) + num3;
    potencia = pow(num3, 3); 

    printf("produto do dobro do primeiro com metade do segundo: %.2f\n", produto);
    printf("soma do triplo do primeiro com o terceiro: %.2f\n", soma);
    printf("terceiro elevado ao cubo: %.2f\n", potencia);

    return 0;
}
