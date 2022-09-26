#include <stdio.h>
#include <string.h>

int main (){
	int i, length;
	char cadeia [101], ascii;

printf ("\nInsira uma cadeia de caracteres:");
		gets(cadeia);	
	length = strlen(cadeia);
for (i=0; i < length; i++){
		ascii = cadeia[i];
	if ((ascii >= 97) && (ascii <= 122)){
		ascii = ascii - 32;
			printf ("%c", ascii);
			}
		else{
		printf ("%c", cadeia[i]);
	}
}
	return 0;
}
