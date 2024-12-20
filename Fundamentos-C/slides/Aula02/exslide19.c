#include <stdio.h>

int main()
{
    int idade;
    float altura;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);    
    
    printf("Digite sua altura: ");
    scanf("%f",&altura);

    printf("Muito bem! Voce tem %d anos com %g de altura.", idade, altura);

    return 0;
}
