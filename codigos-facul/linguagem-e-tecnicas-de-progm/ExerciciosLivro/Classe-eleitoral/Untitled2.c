#include <stdio.h>
int main()
{
	int idade;
	printf("Informe a idade:\n");
	scanf("%d", &idade);
	if (idade < 16)
	
	{
		printf("Nao eleitor\n");
	}
	
	else
	
	{
		if ((idade < 18) || (idade >65))
	{
	printf("Eleitor facultativo\n");
	}
	
	else
	{
	printf("Eleitor obrigatorio\n");
	}
	}
	return(0);
}
