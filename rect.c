#include<stdio.h>
 
int main() {
   int i, a,b,j;
   printf("Entre com a altura\n");
   scanf("%d",&b);
    printf("Entre com a largura\n");
   scanf("%d",&a);
   for (i = 0; i < b; i++) {
      printf("\n");
      for (j = 0; j < a; j++) {
         if (i == 0 || i == (b-1) || j == 0 || j == (a-1))
            printf("?");
         else
            printf(" ");
      }
   }
   return (0);
}

