#include <stdio.h>

int main() {
    int a, b;
    int *p_a = &a, *p_b = &b;

    *p_a = 10;
    *p_b = 20;

    printf("Soma: %d\n", a + b);
    
    return 0;
}
