#include <stdio.h>

char *copia_str(char *str1, char *str2){
     char *str = str1;
	while(*str2){
    	    *str1 = *str2;
    	    str1++;
    	    str2++;
	}
	*str1 = '\0';
	return str1;
}

int main()
{
	char str[50];
	copia_str(str,"C eh uma linguagem tremenda.");

	printf("%s",str);

	return 0;
}
