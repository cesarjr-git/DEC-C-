#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
   int a,b;
   
   printf("Informe dois numeros inteiros: \n");
   scanf("%d %d",&a,&b);
   if (a==b)
     printf("Numeros iguais");
   else
      if (a>b)
        printf("%d e o maior.",a);	
      else
        printf("%d e o maior.",b);				
   getch();	
}

