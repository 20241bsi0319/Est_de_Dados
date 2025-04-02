#include <stdio.h>

void calc_inter(int cA[50], int tA, int cB[50], int tB, int cI[50], int *tI){
    for(int i = 0; i < tA; i++){
        for(int j = 0; j < tB; j++){
            if(cA[i] == cB[j]){
		cI[*tI] = cA[i];
                (*tI)++;
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
    int conjI[50];
    int tamI = 0;

    calc_inter(conjA, tamA, conjB, tamB, conjI, &tamI);

    printC(conjA, tamA);
    printC(conjB, tamB);
    printC(conjI, tamI);

    return 0;
}