#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str_num1[] = "10";
    char str_num2[] = "24";
    char str_num[10];

    strcpy(str_num, str_num1);
    strcat(str_num, str_num2);
    
    printf("%d", atoi(str_num));
    return 0;
}


