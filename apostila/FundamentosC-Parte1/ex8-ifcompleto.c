#include <stdio.h>

int main() {
    int x = 10, num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < x) {
        printf("Você digitou um valor menor que x");
    } else {
        printf("Você digitou um valor maior ou igual a x");
    }

    return 0;
}


