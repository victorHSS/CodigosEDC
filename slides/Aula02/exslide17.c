#include <stdio.h>

//variáveis globais
int idade = 16;
float altura = 1.75f;

int main()
{
    //variáveis locais
    char nome[20] = "Victor Andre";
    char sangue = 'B', fator = '+';
    
    printf("Ola, meu nome eh %s.\n", nome);
    printf("Eu tenho %d anos, com %f de altura.", idade, altura);
    printf("Meu sangue eh %c%c.", sangue, fator);

    return 0;
}
