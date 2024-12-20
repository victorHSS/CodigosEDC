#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	char op;

	printf("Entre com dois numeros seguidos da operacao (+-): ");
	scanf("%d %d %c", &a, &b, &op);

	if (op == '+')
		printf("Soma: %d\n", a + b);
	else if (op == '-')
		printf("Diferenca: %d\n", a - b);
	else
		printf("Operacao desconhecida.\n");
	
	return 0;
}
