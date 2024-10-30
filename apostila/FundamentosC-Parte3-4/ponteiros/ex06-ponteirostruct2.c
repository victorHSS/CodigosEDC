#include <stdio.h>

typedef struct {
	char nome[100];
	unsigned tempo_servico;
} sPESSOA;

int main()
{
	sPESSOA admin = {"Victor Andre",12}, *p_admin = &admin;

	printf("Admin: %s\n",(*p_admin).nome);
	printf("Tempo de servico: %u",(*p_admin).tempo_servico);

	return 0;
}
