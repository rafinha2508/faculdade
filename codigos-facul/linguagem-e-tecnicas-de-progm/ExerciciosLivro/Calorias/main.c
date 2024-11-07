#include <stdio.h>
int main()
{
	int op;
	float total;
	total = 0;
	
	printf("1 - Italiano\n2 - Japones\n3 - Salvadorenho\n");
	printf("Informe o prato desejado: \n");
	scanf("%d", &op);
	switch(op)
	
	{
	
		case 1: total = total + 750;
			break;
		
		case 2: total = total + 324;
			break;
		
		case 3: total = total + 545;
			break;
	}
	
	printf("1 - Cha\n2 - Suco de laranja\n3 - Refrigerante:\n");
	printf("Informe a bebida desejada: \n");
	scanf("%d",&op);
	
	
	switch(op)
	{
	
		case 1: total = total + 30;
			break;
		
		case 2: total = total + 80;
			break;
		
		case 3: total = total + 90;
			break;
	}
	
	printf("O total de calorias e: %.2f \n", total);
	return(0);
}
