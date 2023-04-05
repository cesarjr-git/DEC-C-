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
     r=a-b;
     printf("%d - %d = %d",a,b,r);
   }
   else
   		if (b>a)
   		{
     		r=b-a;
     		printf("%d - %d = %d",b,a,r);
   		}
		else
 			  printf("Numeros iguais");
   getch();	
}

