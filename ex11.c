#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vitorias1;
    int empates1;
    int derrotas1;
    int vitorias2;
    int empates2;
    int derrotas2;

    int pontosEq1;
    int pontosEq2;

    printf("- Equipe 1\n");

    printf("Vitorias: ");
    scanf("%d", &vitorias1);
    
    printf("Empates: ");
    scanf("%d", &empates1); 

    printf("Derrotas: ");
    scanf("%d",&derrotas1);

    printf("\n- Equipe 2\n");
    
    printf("Vitorias: ");
    scanf("%d", &vitorias2);
    
    printf("Empates: ");
    scanf("%d", &empates2); 

    printf("Derrotas: ");
    scanf("%d",&derrotas2);

    pontosEq1 = (vitorias1 * 3) + empates1;
    pontosEq2 = (vitorias2 * 3) + empates2;

    printf("\nEquipe 1: \nVitorias: %d \nEmpates: %d \nDerrotas: %d \nPontuacao: %d\n", vitorias1, empates1, derrotas1, pontosEq1);
    printf("\nEquipe 2: \nVitorias: %d \nEmpates: %d \nDerrotas: %d \nPontuacao: %d", vitorias2, empates2, derrotas2, pontosEq2);




    return 0;
}
