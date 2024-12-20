#include <stdio.h>
#include <stdlib.h>

struct dados {
    char nome[50];
    char endereco[200];
    unsigned idade;
    char sexo;
};

int main() {
    struct dados pessoa = {"Victor", "Parkville",19, 'M'};

    printf("Nome: %s", pessoa.nome);
    printf("Endereco: %s", pessoa.endereco);
    printf("Idade: %d", pessoa.idade);
    printf("Sexo: %c", pessoa.sexo);

    return 0;
}


