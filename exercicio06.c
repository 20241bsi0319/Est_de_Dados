#include <stdio.h>
#include <string.h>

typedef struct pessoa{
    long rg;
    char nome[128];
    int idade;
    char prof[128];
}t_pessoa;

typedef struct residencia{
    int num;
    int quartos;
    int garagens;
    t_pessoa residente[5];
}t_residencia;

typedef t_residencia t_quarteirao[3][4];

int main(){

    t_quarteirao condominio;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            condominio[i][j].num = 0;
            condominio[i][j].idade = 0;
        }
    }

    return 0;
}
