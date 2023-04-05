#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int num1,num2;
	system("cls");
	printf("Informe dois numeros inteiros: \n");
	scanf("%d %d",&num1,&num2);
	if (num1 % 2==0)
	printf("%d e multiplo de 2.\n",num1);
	else
	printf("%d nao e multiplo de 2.\n",num1);
	if (num2 % 2==0)
	printf("%d e multiplo de 2.",num2);
	else
	printf("%d nao e miltiplo de 2.",num2);
	getch();
}
