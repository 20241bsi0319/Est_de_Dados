#include <stdio.h>
#include <string.h>
typedef char t_palavra[64];
typedef t_palavra t_vet_palavras[256];

void separa(const char *texto, t_vet_palavras ws, int *tam){
    t_vet_palavras aux;
    int aux_index = 0;

    for(int i = 0; i < strlen(texto); i++){
        if(texto[i] != ' '){
            aux[aux_index++] = texto[i];
        }
        else{
            aux[aux_index] = '/0';
            strcpy(ws[(*tam)++], aux);
            aux_index = 0;
        }
    }

}

void print_lst_words(t_vet_palavras ws, int t){
    for(int i = 0; i < t; i++){
        print("%s\n", ws[i])
    }

}

int main(){
    char txt[1024];
    t_vet_palavras lst_words;
    int tam;

    print("Entre com o texto: ");
    fgets(txt, 1023, stdin);
    
    separa(txt, lst_words, &tam);

    return 0;
}
