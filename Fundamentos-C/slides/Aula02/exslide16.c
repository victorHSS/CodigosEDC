#include <stdio.h>

//variáveis globais
int idade = 16;
float altura = 1.75f;

int main()
{
    //variáveis locais
    char sangue = 'B', fator = '+';
    
    printf("Eu tenho %d anos, com %f de altura.\n", idade, altura);
    printf("Meu sangue eh %c%c.", sangue, fator);

    return 0;
}
