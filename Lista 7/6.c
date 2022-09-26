#include <stdio.h>
#include <string.h>


int main (){
int i=0, j=0, cont=0;	
char frase[101], frase_final[101];

printf ("\nPor favor, digite uma frase:");
gets (frase);

for (i=0; i < 101 && frase[i] != '\0'; i++){
	if (frase[i] == ' '){
		cont++;
	}
	else {
		frase_final[j] = frase [i];
		j++;
	}
}
i = 0;
for (i=0; i<j; i++){
	printf ("%c", frase_final[i]);
}

printf ("\nForam encontrados %d espacos na frase.", cont);
return 0;
}

