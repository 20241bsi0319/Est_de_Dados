#include <stdio.h>

void calc_uniao(int cA[50], int tA, int cB[50], int tB, int cU[50], int *tU){
    for(int i = 0; i < tA; i++){
        
    for(int j = 0; j < tB; j++){
        if(cA[i] == cB[j]){
	        cU[*tU] = cA[i];
            (*tU)++;
            }
        }
    }
}

void printC(int conj[50], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d", conj[i]);
    }
    printf("\n");
}

int main(){
    int conjA[50] = {1, 2, 3, 4, 5, 6, 7};
    int tamA = 7;
    int conjB[50] = {2, 4, 6, 8, 10, 12, 14};
    int tamB = 7;
    int conjU[50];
    int tamU = 0;

    calc_uniao(conjA, tamA, conjB, tamB, conjU, &tamU);

    printC(conjA, tamA);
    printC(conjB, tamB);
    printC(conjU, tamU);

    return 0;
}