#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct linha{
    int id;
    char nome[64];
    char fabricante[64];
    float preco;
    int quant;
} t_prod;

typedef t_prod tabela[10];

void remove_enter(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

void gera_tab(tabela tab, int *size){
    *size = 0;
    char buffer[64];

    printf("Preencha o conteúdo da tabela: \n");
    for(int i = 0; i < 3; i++){
        printf("ID do produto: ");
        fgets(buffer, 63, stdin);
        tab[i].id = atoi(buffer);

        printf("Nome: ");
        fgets(tab[i].nome, 63, stdin);
        remove_enter(tab[i].nome);

        printf("Fabricante: ");
        fgets(tab[i].fabricante, 63, stdin);
        remove_enter(tab[i].fabricante);

        printf("Preço: ");
        fgets(buffer, 63, stdin);
        tab[i].preco = atof(buffer);

        printf("Quantidade: ");
        fgets(buffer, 63, stdin);
        tab[i].quant = atoi(buffer);

    
        printf("\n");
        (*size)++;
    }
}

void print_tab(tabela tab, int size){
    printf("TABELA DE PRODUTOS: \n");
    printf("%s   %s   %s   %s   %s \n", "ID", "Nome", "Fabricante", "Preço", "Quantidade");
    for(int i = 0; i < size; i++){
        printf("%5d     %s     %s     %2.f     %3d \n", tab[i].id, tab[i].nome, tab[i].fabricante, tab[i].preco, tab[i].quant);
    }
}

int main(){
    tabela produtos;
    int tam;

    gera_tab(produtos, &tam);
    print_tab(produtos, tam);

    return 0;
}
