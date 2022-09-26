#include<stdio.h>

int main(){

	int cont= 0, num, vet[cont];

	scanf("%d",&num);

	while (num != 999){

		if (cont == 0){
		vet[cont] = num;
		cont++;
		}	

			else{
			vet[cont] = num;
			cont = cont + 1;
			}

	scanf("%d",&num);		
	}

	if (num == 999){
		cont= cont - 1;
		}

	while ( cont >= 0 ){

		printf("%d\n",vet[cont]);
		cont = cont - 1;
	}
	getchar();
	getchar();		
	return 0;
}
