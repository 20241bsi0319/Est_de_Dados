#include <stdio.h>

typedef struct veiculo{
    char placa[64];
    char marca[64];
    char modelo[64];
    long cpf;
} t_veiculo;

typedef struct proprietario{
    long cpf;
    char nome[128];
    char email[64];
    long num;
} t_prop;


char learq(filename){
    FILE *arq = fopen(filename, "rt");
    char buffer[256];

    while(!feof(arq)){
        fgets(buffer, 255, arq);

    }

    fclose(arq);
}

int main(){

    
    return 0;
}
