#include<stdio.h>


int main() {

    int cont, i, vet[10], vet_impar[10];
    
    for (i = 0; i < 10; i++)
      {
        printf("\nDigite o [%d] numero: \n", i);
        scanf("%d", &vet[i]);

          if (vet[i] % 2 != 0) 
           {
              vet_impar[cont] = vet[i];
              cont= cont + 1;
            }  
      }

     printf("\nOs seguintes numeros sao impares :\n");
    for (i=0; i<cont;i++) 
      {
        printf("\n%d\n",vet_impar[i]);
      }
  	
	  	getchar ();
    	getchar ();
    	return 0;
}
