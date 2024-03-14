#include <stdio.h>

int main(int argc, char const *argv[])
{
    float celsius;
    float farenheit;

    printf("Digite a temperatura em celsius: ");
    scanf( "%f", &celsius);

    farenheit = (9 * celsius / 5) + 32;

    printf("%.2f celsius e equivalente a %.2f farenheit", celsius, farenheit);


    return 0;
}
