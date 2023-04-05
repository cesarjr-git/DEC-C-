#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int n1,n2,n3,n4;
	
	printf("Informe 4 numeros:\n");
	scanf(%d %d %d %d,&n1,&n2,&n3,&n4);
	if(n1%2==0 && n1%3==0)
	printf("%d eh divisivel por 2 e por 3.\n",n1);
	else
	printf("%d nao eh multiplo de 2 e 3. \n",n1);
	if (n2%2==0 && n2%3==0)
	printf("%d eh divisivel por 2 e por 3.\n",n2);
	else
	printf("%d nao eh multiplo de 2 e 3.\n",n2);
	if(n3%2==0 && n3%3==0)
	printf("%d eh divisivel por 2 e por 3.\n3");
	else
	printf("%d nao eh multiplo de 2 e 3.\n",n3);
	if (n4%2==0 && n4%3==0)
	printf("%d eh divisivel por 2 e por 3.\n",n4);
	else
	printf("%d nao eh multiplo de 2 e 3.\n",n4);
	getch();
}
