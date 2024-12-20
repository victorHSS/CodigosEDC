#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um número maior que 10: ");
        scanf("%d", &num);
    } while (num <= 10);

    return 0;
}


