#include <stdio.h>
#include <string.h> 

struct DADOS {
    char nome[100];
    char endereco[300];
    unsigned idade;
    char sexo;
} pessoa1;

struct DADOS pessoa2 = {"Fulana", "Av. Tal", 30, 'F'};

int main(){
    strcpy(pessoa1.nome, "Victor Andre");
    strcpy(pessoa1.endereco, "R. tal tal tal");
    pessoa1.idade = 30;
    pessoa1.sexo = 'M';
    
    printf("%s \n", pessoa1.nome);
    printf("%s \n", pessoa1.endereco);
    printf("%u \n", pessoa1.idade);
    printf("%c \n", pessoa1.sexo);

    return 0;
}
