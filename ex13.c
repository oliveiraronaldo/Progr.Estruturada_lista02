#include <stdio.h>

int main() {
    int classe, territorio, arma;
    printf("Bem-vindo ao jogo de aventuras!\n\n");

    printf("Escolha uma classe:\n");
    printf("1. Guerreiro\n");
    printf("2. Mago\n");
    printf("3. Druida\n");
    printf("4. Sacerdote\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &classe);
    
    printf("\nEscolha um território:\n");
    printf("1. Azeroth\n");
    printf("2. Azkaban\n");
    printf("3. Aurora\n");
    printf("4. Brightwood\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &territorio);
    
    printf("\nEscolha uma arma:\n");
    printf("1. Machado cego\n");
    printf("2. Picareta invertida\n");
    printf("3. Adaga sem ponta\n");
    printf("4. Corrente sem elo\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &arma);

    printf("\nVocê agora é um ");

    switch(classe) {
        case 1:
            printf("Guerreiro");
            break;
        case 2:
            printf("Mago");
            break;
        case 3:
            printf("Druida");
            break;
        case 4:
            printf("Sacerdote");
            break;
        default:
            printf("Aventureiro Desconhecido");
    }

    printf(" da região de ");

    switch(territorio) {
        case 1:
            printf("Azeroth");
            break;
        case 2:
            printf("Azkaban");
            break;
        case 3:
            printf("Aurora");
            break;
        case 4:
            printf("Brightwood");
            break;
        default:
            printf("um lugar desconhecido");
    }

    printf(" armado com um ");

    switch(arma) {
        case 1:
            printf("Machado cego");
            break;
        case 2:
            printf("Picareta invertida");
            break;
        case 3:
            printf("Adaga sem ponta");
            break;
        case 4:
            printf("Corrente sem elo");
            break;
        default:
            printf("um objeto misterioso");
    }
    
    printf(".\n");

    return 0;
}

