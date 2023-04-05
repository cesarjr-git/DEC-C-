#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
   int a,b,r;
   
   printf("Informe dois numeros inteiros: \n");
   scanf("%d %d",&a,&b);
   if (a>b)
   {
     r=a+100;
     printf("%d e o maior e a somado a 100 e igual %d",a,r);
   }
   if (b>a)
   {
     r=b+100;
     printf("%d e o maior e a somado a 100 e igual %d",b,r);
   }

   if(a==b)
     printf("Numeros iguais");
   getch();	
}

