<h1>Implementação de algumas funções utilitárias para os nossos projectos</h1>

<br><br>
Conteúdo de <code>conjuntos/descricao.txt</code>

<br>
<b>Teoria dos conjuntos</b>

Tal como as listas, os conjuntos são um agrupamento de elementos diferentes
sem alguma ordem em particular. Mais informações sobre os conjuntos pode ser
encontrado na matéria ou na internet.

Cada umas das seguintes funções deve ser implementada.

a) <code>percenteConjunto(x, A)</code> <br/>
Esta função deve verficar se o elemento <code>x</code> pertence ao conjunto <code>A</code><br/><br/>

b) <code>interseccao(A, B)</code> <br />
Esta função retorna o conjunto intersecção entre os conjuntos <code>A</code> e <code>B</code><br/><br/>
<br><br>
<pre><code>
//Exemplo em C
/*
-- Dizando Norton
Breve exemplificação de uma função que identifica o conjunto
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

</code></pre>


c) <code>diferenca(A, B)</code> <br>
Esta função retorna o conjunto diferença entre os conjuntos <code>A</code> e <code>B</code><br/><br/>

d) <code>subconjunto(A, B)</code> <br>
Esta função identifica se o conjunto <code>A</code> é subconjunto de <code>B</code>
<br/><br/>

e) <code>tamanho(A)</code> <br>
Esta função retorna o tamanho (número de elementos) do conjunto <code>A</code>
<br/><br/>

f) <code>iguais(A, B)</code> <br>
Esta função identifica se o conjunto <code>A</code> e o conjunto <code>B</code>
são iguais.
<br/><br/>

g) <code>produto(A, B)</code> <br>
Esta função retorna o produto cartesiano entre os conjuntos <code>A</code> e <code>B</code>
<br/><br/>


<b>NOTAs:</b> 
<ul>
	<li>De momento as implementações podem ser feitas nas linguagens que preferirem</li>
	<li>Implementem as funções num ficheiro com os vossos nomes e carreguem no repositório</li>
	<li>Podem trabalhar em conjunto (aliás esse é um dos principais objectivos)</li>
	<li>Sintam-se a vontade para discutir as questões no grupo do WP</li>
	<li>Mais uma vez, vão polindo o vosso Javascript</li>
	<li>Bom trabalho!!! :-)</li>	
</ul>