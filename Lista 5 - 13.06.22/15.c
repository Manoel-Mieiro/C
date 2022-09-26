#include <stdio.h>

int main (){
	float dias; 
	int data1, data2, sum=0, sumbi=0, bissexto, nbissexto, cont=0; //sumbi corresponde à soma dos anos bissextos, sum à dos não bissextos. 
																	//bissexto e nbissexto pegam a soma das datas bissextas ou não e multiplicam pelo nº de dias correlatos
	printf ("\n Insira a data mais antiga: \n");
	scanf ("%d", &data1);
	
	printf ("\n Insira a data mais nova: \n");
	scanf ("%d", &data2);
	
	
	
	
	
	while (data2 > data1){

	data1 = data1 + 1;
	
		if ((data1%400 == 0) || (data1%4 == 0) && (data1%100 != 0)){
			sumbi = sumbi + 1;
		}
		else {
		sum = sum + 1;
		}
		cont = cont + 1;
	}
	
	data1 = data1 - cont;
	bissexto = sumbi * 366;
	nbissexto = sum * 365;
	
	dias = bissexto + nbissexto;
	
	printf ("\n Passaram-se %f dias entre %d e %d. \n", dias, data1, data2);
	
	getchar();
	getchar();
	return 0;
}
