#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int vida;
    int ataque;
    int defesa;
    float xp;

    printf("Vida: ");
    scanf("%d", &vida);

    printf("Ataque: ");
    scanf("%d", &ataque);

    printf("Defesa: ");
    scanf("%d", &defesa);

    xp = (vida + ataque + defesa) / 3;

    if(xp < 26){
        printf("Novato");
    }else if(xp < 51){
        printf("Mago");
    }else if(xp < 76){
        printf("Mago Supremo");
    }else{
        printf("Lorde das Magias");
    }

    

    return 0;
}
