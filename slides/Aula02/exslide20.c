#include <stdio.h>

int main()
{
	char nome[30];
	char endereco[200];

	printf("Digite seu nome: ");
	scanf("%s", nome);

	printf("Qual seu endereco: ");
	scanf("%s", endereco);

	printf("Certo, %s. Vou enviar correspondencia para %s.", nome, endereco);
	
	return 0;
}
