#include <stdio.h>
#include <string.h>

int main() {
    char s1[40] = "O rato roeu a", s2[30] = " roupa do rei de Roma.";
    int i = 0, j = 0;    

    while (s1[i]) i++;

    while (s2[j]) { 
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    printf("%s",s1);

    return 0;
}
