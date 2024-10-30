#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[100];
	unsigned tempo_servico;
} sPessoa;

int main()
{
	sPessoa *admin = NULL;

	admin = (sPessoa*) malloc(sizeof(sPessoa));

	gets(admin->nome);
	scanf("%d",&admin->tempo_servico);

	printf("%s trabalha há %d na empresa", admin->nome, admin->tempo_servico);

	free(admin);
	return 0;
}
