#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i;
      float a,b,c;

      
      printf("Informe 3 quaisquer valores reais: \n");
      scanf("%f%f%f",&a,&b,&c);
      
      printf("Voce deseja ver os numeros em:\n1-ordem crescente\n2-ordem descrescente\n3-o maior valor no meio:\n");
      scanf("%i",&i);
      
      printf("\nOs valores lidos sao:");
      printf("Escolha: %d - Reais: %.1f - %.1f - %.1f\n",i,a,b,c);
      printf("Tecle algo para contimuar...");
      getch();
      
	  switch (i)
      {
           case 1: printf("Em ordem crescente: \n");
		             if ((a<b) && (a<c))
		                if (b<c)
			                printf("%.1f - %.1f - %.1f",a,b,c);
                      else
			                printf("%.1f - %.1f - %.1f",a,c,b);
                   else
		                 if (b<c)
		                    if (a<c)
			                    printf("%.1f - %.1f - %.1f",b,c);
		                    else
			                     printf("%.1f - %.1f - %.1f",b,c,a);
                       else
		                     if (a<b)
			                     printf("%.1f - %.1f - %.1f",c,a,b);
		                     else
			                      printf("%.1f - %.1f - %.1f",c,b,a);
                   break;
           case 2: printf("Em ordem decrescente: \n");
		             if ((a>b) && (a>c))
		                if (b>c) 
		                   printf("%.1f - %.1f - %.1f",a,b,c);
                      else
		                    printf("%.1f - %.1f - %.1f",a,c,b);
                   else
		                 if (b>c) 
		                    if (a>c) 
		                       printf("%.1f - %.1f - %.1f",b,a,c);
		                    else
			                     printf("%.1f - %.1f - %.1f",b,c,a);
                       else
		                     if (a>b) 
		                        printf("%.1f - %.1f - %.1f",c,a,b);
                           else
	                           printf("%.1f - %.1f - %.1f",c,b,a);
	                  break;
           case 3: printf("Maior no meio: \n");
		             if ((a>b) && (a>c))
		                if (b>c) 
		                   printf("%.1f - %.1f - %.1f",b,a,c);
                      else
		                   printf("%.1f - %.1f - %.1f",c,a,b);
                  else
		                if (b>c) 
		                   if (a>c) 
		                      printf("%.1f - %.1f - %.1f",a,b,c);
		                   else
			                    printf("%.1f - %.1f - %.1f",c,b,a);
                     else
		                   if (a>b) 
		                      printf("%.1f - %.1f - %.1f",a,c,b);
		                   else
			                    printf("%.1f - %.1f - %.1f",b,c,a);
	                 break;
           default:
               printf("Opcao invalida");
      }
      getch();
}


