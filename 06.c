#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
   int num1,num2,num3;
	printf("Informe tres numeros inteiros: \n");
   	scanf("%d %d %d",&num1,&num2,&num3);
   	if (num1 > num2 && num1 > num3)
      printf("%d e o maior.",num1);
	else
   		if ((num2 > num3))
      		printf("%d e o maior.",num2);
		else
		   printf("%d e o maior.",num3);

   getch();	
}

