#include <stdio.h>
#include <string.h>

int main() {
    char s1[40] = "O rato roeu a", s2[30] = " roupa do rei de Roma.";

    strcat(s1,s2);

    printf("%s",s1);

    return 0;
}
