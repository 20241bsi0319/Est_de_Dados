#include <stdio.h>
#include <string.h>

typedef struct produto{
    int id;
    char nome[64];
    char fabricante[64];
    float preco;
    int quantidade;
} produto;

typedef produto tabela[10];

void le_prod(tabela tab, int *t){
    int tam = 3;
    *t = 0;

    for(int i = 0; i < tam; i++){
        printf("Insira o ID do produto: ");
        scanf('%d', tab[i].id);

        printf("Insira o nome do produto: ");
        fgets(tab[i].nome, 63, stdin);

        printf("Insira o fabricante do produto: ");
        fgets(tab[i].fabricante, 63, stdin);

        printf("Insira o ID do produto: ");
        scanf('%f', tab[i].preco);

        printf("Insira o ID do produto: ");
        scanf('%d', tab[i].quantidade);
        printf('\n');
        (*t)++;
    }
}

void print_tab(tabela tab, int t){
    printf("Tabela: \n");
    for(int i=0; i<t; i++){
        printf('a');
    }
}

int main(){
tabela produtos;
int tam;

le_prod(produtos, &tam);
print_tab(produtos, tam);

    return 0;
}
