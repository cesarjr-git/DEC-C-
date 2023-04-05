#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float n1,n2,n3,ma;
	printf("Informe as tres notas: \n");
	scanf("%f %f %f",&n1,&n2,&n3);
	ma=(n1+n2+n3)/3;
	printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\nMedia: %.2f\n",n1,n2,n3,ma);
	if (ma>=9)
	printf("Conceito A sendo Aprovado");
	if (ma>=7.5 && ma>9)
	printf("Conceito B sendo Aprovado");
	if (ma>=6 && ma<7.5)
	printf("Conceito C sendo aprovado");
	if (ma>=4 && ma<6)
	printf("Conceito D sendo Reprovado");
	if (ma<4)
	printf("Conceito E sendo Reprovado");
	getch();
}
