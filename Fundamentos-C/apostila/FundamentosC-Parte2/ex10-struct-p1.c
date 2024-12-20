#include <stdio.h>
#include <stdlib.h>

struct dados {
    char nome[50];
    char endereco[200];
    unsigned idade;
    char sexo;
};

int main() {
    struct dados pessoa;
    
    printf("Entre com o nome: ");
    gets(pessoa.nome);
    printf("Entre com o endereco: ");
    gets(pessoa.endereco);
    printf("Entre com a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Entre com o sexo [M,F]: ");
    scanf("\n%c", &pessoa.sexo);

    printf("Nome: %s", pessoa.nome);
    printf("Endereco: %s", pessoa.endereco);
    printf("Idade: %d", pessoa.idade);
    printf("Sexo: %c", pessoa.sexo);

    return 0;
}


