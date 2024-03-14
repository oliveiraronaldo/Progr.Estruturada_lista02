#include <stdio.h>

int main(int argc, char const *argv[])
{

    float celsius;
    float farenheit;

    printf("Digite a temperatura em farenheit: ");
    scanf( "%f", &farenheit);

    celsius = 5 * (farenheit - 32) / 9;

    printf("%.2f farenheit e equivalente a %.2f celsius", farenheit, celsius);



    return 0;
}
