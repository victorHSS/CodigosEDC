#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str_num[10];
    int p = 0;
   
    printf("Digite apenas números: ");
    gets_s(str_num, 10);
    
    //verificando
    while(str_num[p]){
        if (!isdigit(str_num[p])) {
            printf("Eu disse apenas números!");
            exit(1);
        }
        p++;
    }
    
    printf("%d", atoi(str_num));
    return 0;
}


