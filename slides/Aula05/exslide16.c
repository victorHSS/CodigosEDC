#include <stdio.h>

struct PESSOA {
    char nome[100];
    unsigned tempo_servico;
};


int main() {
    struct PESSOA admin = {"Victor",12}, *p_admin = &admin;

    printf("Admin %s\n", p_admin->nome);
    printf("Tempo de servico: %u\n", p_admin->tempo_servico);

    return 0;
}
