#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vitorias1, empates1, derrotas1;
    int vitorias2, empates2, derrotas2;

    float totalEq1, totalEq2;

    printf("-Equipe 1\n");

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

    totalEq1 = vitorias1 + empates1 + derrotas1;
    totalEq2 = vitorias2 + empates2 + derrotas2;

    float wpct1 = (vitorias1/totalEq1)*100;
    float tpct1 = (empates1/totalEq1)*100;
    float lpct1 = (derrotas1/totalEq1)*100;
    
    float wpct2 = (vitorias2/totalEq2)*100;
    float tpct2 = (empates2/totalEq2)*100;
    float lpct2 = (derrotas2/totalEq2)*100;

    printf("\nEquipe 1: \nVitorias: %d - %.1f%% \nEmpates: %d - %.1f%% \nDerrotas: %d - %.1f%%\n", vitorias1, wpct1, empates1, tpct1, derrotas1, lpct1);
    printf("\nEquipe 2: \nVitorias: %d - %.1f%% \nEmpates: %d - %.1f%% \nDerrotas: %d - %.1f%%", vitorias2, wpct2, empates2, tpct2, derrotas2, lpct2);


    return 0;
}
