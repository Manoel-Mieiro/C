#include <stdio.h>
#include <string.h>


int main (){
int i, save_indice[i];	
char palavra[51], caracter;

printf ("\nPor favor, digite uma palavra:");
gets (palavra);
printf ("\nPor favor, digite um caracter:");
scanf ("%c", &caracter);

for (i; i < 51 && palavra[i] != '\0'; i++){
	if ((palavra[i] == 'a') || (palavra[i] == 'e') || (palavra[i] == 'i') || (palavra[i] == 'o') || (palavra[i] == 'u')){
	palavra[i] = caracter;
	}
}
printf ("%s", palavra);

return 0;
}

