#include <stdio.h>
#include <string.h>

int main() {
    printf("Ola mundo!\n");
 
int hora;
		printf("Digite uma hora do dia: ");
	scanf("%d", &hora);
if (hora < 12) {
		printf("Bom dia!\n");
}
else {
printf("Boa tarde!\n"); 
}
	
int idade;
double salario, altura;
char genero;
char nome[50];
 
      idade = 20;
      salario = 1000,00;
      altura = 1.70;
      genero = 'M';
      
strcpy(nome, "João");
  
      printf("IDADE = %d\n", idade);
      printf("SALARIO = R$ %.2lf\n", salario);
      printf("ALTURA = %.2lf\n", altura);
      printf("GENERO = %c\n", genero);
      printf("NOME = %s\n", nome);
  
  
 int N, i, x, soma;
 printf("Quantos numeros serao digitados? ");
 scanf("%d", &N);
 soma = 0;
 for (i = 1; i <= N; i++) {
 printf("Digite um numero: ");
 scanf("%d", &x);
 soma = soma + x;
 }
 printf("SOMA = %d\n", soma); 


  
 return 0;
} 
