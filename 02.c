#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int id;
	
	printf("Informe sua idade: \n");
	scanf("%d",&id);
	if (id>=18)
	printf("Voce e maior de idade");
	else
	printf("Voce e menor de idade");
	getch();
}
