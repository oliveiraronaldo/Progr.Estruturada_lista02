#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float tamanho;
    float litros;
    int latas;
    float valor;

    printf("Tamanho da area a ser pintada: ");
    scanf("%f", &tamanho);

    litros = ceil(tamanho / 3);
    latas = ceil(litros / 18);
    valor = latas * 80;

    printf("A quantidade de latas necessarias e: %d \nA compra vai custar R$%.2f", latas, valor);


    return 0;
}
