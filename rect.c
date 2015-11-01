#include<stdio.h>
#include <string.h>
/************************************** 
* Trabalho 2 de Programacao de Computadores I - Retangulo
* Curso de Sistemas da informacao
* Aluno: Paula Galindo - matricula: 0050013381
* Professor: Alex Salgado
***************************************/ 
int main() {
   int i,a,b,j;
  char opcao; 
  do{
   printf("Entre com a altura\n");
   scanf("%d",&b);
    printf("Entre com a largura\n");
   scanf("%d",&a);
  
   printf("Olá, meu nome e Paula e o retangulo ficou assim:\n");
   for (i = 0; i < b; i++) {
      printf("\n");
      for (j = 0; j < a; j++) {
         if (i == 0 || i == (b-1) || j == 0 || j == (a-1))
           printf("*");
         else
            printf(" ");
            
            

 }
} 
printf("Deseja continuar(s/n)\n");
   scanf(" %c",&opcao); 
  }while(opcao == 's');  	
   return 'n';
}

