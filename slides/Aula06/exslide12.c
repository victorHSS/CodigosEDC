#include <stdio.h>

int str_len(char *str) {
	int len = 0;
	while (str[len]) len++;
	return len;
}

int main() {
	printf("O comprimento de \"Estruturas\" eh ");
	printf("de %d caracteres.\n", str_len("Estruturas"));
	return 0;
}

