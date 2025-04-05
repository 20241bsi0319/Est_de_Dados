#include <stdio.h>
void calc_inter(int cA[20], int tA, int cB[20], int tB, int cU[20], int *tU){
    for(int h = 0; h < tA; h++){
        cU[h] = cA[h];
        (*tU)++;
    }
    for(int i = 0; i < tB; i++){
        int aux = 0;
        for(int j = 0; j < tA; j++){
            if(cB[i] == cU[j]){
                aux = 1;
            }    
        }
        if(aux == 0){
            cU[*tU] = cB[i];
            (*tU)++;
        }
    }
}

void printC(int conj[20], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d", conj[i]);
        if(i == (tam - 1)){
            break;
        }
        printf(", ");
    }
    printf("\n");
}

int main(){
    int conjA[20] = {1, 2, 3, 4, 5, 6, 7};
    int tamA = 7;
    int conjB[20] = {2, 4, 6, 8, 10, 12, 14};
    int tamB = 7;
    int conjU[20];
    int tamU = 0;

    calc_inter(conjA, tamA, conjB, tamB, conjU, &tamU);

    printC(conjA, tamA);
    printC(conjB, tamB);
    printC(conjU, tamU);

    return 0;
}
