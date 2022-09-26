#include <stdio.h>
#include <string.h>
struct dados{
	char marca[15];
	int ano;
	float preco;
}carros[5];

int main (){
	int i=0;
	float p=0;
for (i=0; i<5; i++){
		printf ("Informe a marca do veiculo:	");
		scanf ("%[\n]", carros[i].marca);
		fflush (stdin);
		printf ("Informe o ano do veiculo:	");
		scanf ("%d", carros[i].ano);
		printf ("Informe o preco do veiculo:	");
		scanf ("%f", &carros[i].preco);
}
printf ("Informe o valor de parametro que deseja comparar:	");
scanf ("%f", &p);
for (i=0; i<5; i++){
	if (carros[i].preco <= p){
		printf ("%s\n", carros[i].marca);
		printf ("%d\n", carros[i].ano);
		printf ("%f\n", carros[i].preco);
	}
}
return 0;
}

