#include <stdio.h>

int main(int argc, char const *argv[])
{

    float raio; 
    float perimetro;
    float area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2 * 3.14 *  raio;
    area = 3.14 * (raio) * (raio);

    printf("O perimetro do circulo e %.2f e a area e %.2f", perimetro, area);


    return 0;
}
