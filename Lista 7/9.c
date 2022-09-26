#include <stdio.h>
#include <string.h>

int main (){
	int i, length;
	char frase[101];

printf ("\nInsira a frase que deseja codificar:");
		gets(frase);	
	length = strlen(frase);
for (i=0; i < length; i++){
	if (frase[i] == ' '){
	}
	else{
		frase[i] = frase[i] + 3;
		}
}
	printf ("%s", frase);
	return 0;
}
