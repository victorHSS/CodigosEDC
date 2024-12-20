#include <stdio.h>

int main() {
    int arr[3] = {512, 1024, 2048};
    int *p = arr + 1; //aponta para o meio do array

    printf("No endereco p %p temos %d\n", p, *p);
    printf("No endereco p + 1 %p temos %d\n", p + 1, *(p + 1));
    printf("No endereco p - 1 %p temos %d\n", p - 1, *(p - 1));
    
    return 0;
}
