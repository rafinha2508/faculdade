/*estrutura condicional simples em C*/
/*incluindo o conteudo stdio.h*/
#include <stdio.h>

/*insere o conteudo do arquivo math, q tem a funcao sqrt, calculo da raiz quadrada*/
#include <math.h>

/*todo programa em C deve possuir essa linha*/
int main()

{ /*delimita o inicio das instrucoes*/
	int num;
	float raiz;
	
	printf("\nDigite um numero inteiro:");
	scanf("%d", &num);
	if(num % 2 == 0 )
{

	raiz = sqrt(num);
	printf("\nA raiz quadrada e:%.3f", raiz);
}
return(0); /*retorno sem erro*/
} /*fim do conjunto de instrucoes da funcao main*/
