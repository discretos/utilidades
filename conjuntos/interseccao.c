/*
-- Dizando Norton
Breve exemplificação de uma função que retorna o conjunto
resultante da intersecção de dois conjuntos A e B

Isto funcionaria melhor em Java ou Python mais aqui vai
um exemplo inicial em C

*/


#include <stdio.h>
#include <stdlib.h>

/* função interseccao, recebe dois vectores (considerados como conjuntos)
de inteiros e os seus tamanos
e diz onde há interseccao
Notem que em Java/Python/C++ devem utilizar objectos (classe Set em Java). 
Aqui estou a usar vectores/ponteiros que não é a melhor opção */

void interseccao(int *A, int *B, int tamanhoA, int tamanhoB){
	int tamanho, i, j, k=0;
	if (tamanhoA >= tamanhoB) tamanho = tamanhoB;
	else tamanho = tamanhoA;

	int *inters = (int *)malloc(tamanho*sizeof(int));
	for (i=0;i<tamanhoA;i++){
		for (j=0;j<tamanhoB;j++){
			if (A[i] == B[j]) inters[k++]=B[j];
		}
	}
	printf("\nInterseccao entre A e B\n");
	if (k==0) {
		printf("NULL\n");
		return;
	}
	printf("{");
	for (i=0;i<k;i++) printf("%d\t", inters[i]);
	printf("}");
	free(inters);
}

int main(){
	int A[5] = {1, 2, 4, 5, 6};
	int B[5] = {2, 3, 5, 7, 8};
	int tamanhoA, tamanhoB;
	tamanhoA = tamanhoB = 5;
	interseccao(A, B, tamanhoA, tamanhoB);
}
