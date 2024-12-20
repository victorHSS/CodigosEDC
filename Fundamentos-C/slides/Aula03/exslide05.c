#include <stdio.h>
#include <stdlib.h>

int main()
{
	int magico;
	int adivinhe;

	magico = rand();

	printf("Adivinhe o numero magico: ");
	scanf("%d", &adivinhe);

	if (adivinhe == magico)
		printf(" * * ACERTOU * *\n");
	else
		printf(" * * ERROU * *\n");
		
	return 0;
}

