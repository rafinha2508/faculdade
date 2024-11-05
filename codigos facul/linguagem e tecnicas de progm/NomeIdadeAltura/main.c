/* insere o conteúdo do arquivo stdio.h */
#include <stdio.h>
int main ()
{/* declaração das variaveis */
int idade, ano;
float altura;
char nome[30];
/*entrada de dados*/
/*mensagem ao usuario*/
printf ("Digite seu nome: ");
scanf ("%s", nome); /*leitura do nome*/
/*mensagem ao usuario*/
printf ("Digite a idade: ");
scanf ("%d", &idade);/*leitura de idade*/
/*msg ao usuario*/
printf ("Digite a altura: ");
scanf("%f", &altura);/*leitura da altura*/
/*processamento*/
/*calculo do ano de nascimento*/
ano = 2024 - idade;
/*saida de dados*/
printf("\nO nome e: %s", nome);
printf("\nA altura e: %.2f",altura);
printf("\nA idade e: %d",idade);
printf("\nO ano de nascimento e: %d", ano);
return (0);
}
