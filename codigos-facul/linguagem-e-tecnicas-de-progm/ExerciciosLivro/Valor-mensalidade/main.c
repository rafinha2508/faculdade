#include <stdio.h>

int main()
{
	char nome[30];
	int idade;
	float mensalidade;
	
	printf("Digite o seu nome: ");
	scanf("%49s", nome); //numero após %s limita quantidade de caracteres
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	
	if (idade<= 18)
		{
			mensalidade = 50.00;
		}
	
	else if (idade <= 29)
		{
			mensalidade = 70.00;
		}
	
	else if (idade <= 45)
		{
			mensalidade = 90.00;
		}
	
	else if (idade <= 65)
		{
			mensalidade = 130.00;
		}
	
	else
		{
			mensalidade = 170.00;
		}
	
	printf("\nNome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("Valor da mensalidade: R$ %.2f\n", mensalidade);
	
	return(0);
	
}

