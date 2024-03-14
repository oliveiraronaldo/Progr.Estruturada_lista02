#include <stdio.h>

int main(int argc, char const *argv[])
{

    float tamanho;
    float velocidade;
    float tempo;

    printf("Digite o tamanho do arquivo (MB): ");
    scanf("%f", &tamanho);

    printf("Digite a velocidade do link de internet (Mbps): ");
    scanf("%f", &velocidade);

    tempo = (tamanho / (velocidade / 8)) / 60;

    printf("O tempo gasto para download e: %.2f minutos", tempo);

    return 0;
}
