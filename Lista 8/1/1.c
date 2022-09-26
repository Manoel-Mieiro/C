#include <stdio.h>
#include <stdlib.h>



int main (){
    FILE *arquivo1;
    FILE *arquivo2;
    FILE *arquivo3;
	char caractere;

    arquivo1 = fopen ("arq1.txt", "r");

    if (arquivo1 == NULL ) {
        printf("Nao foi possivel abrir o arquivo 1!\n");
        return 1;
    }
	
	arquivo3 = fopen ("arq3.txt", "w");
	while (fscanf(arquivo1, "%c", &caractere) !=EOF ){
		fprintf (arquivo3, "%c", caractere);
	}	
	
	fclose (arquivo1);
	
    arquivo2 = fopen ("arq2.txt", "r");
    if (arquivo2 == NULL) {
        printf("Nao foi possivel abrir o arquivo 2!\n");
        return 1;
    }
	while (fscanf(arquivo2, "%c", &caractere) !=EOF ){
		fprintf (arquivo3, "%c", caractere);
	}
	if (arquivo3 == NULL){
		printf("Nao foi possivel abrir o arquivo 3!\n");
		return 1;
	}
    fclose (arquivo2);
    fclose (arquivo3);
	
	printf ("Gravacao realizada com sucesso, favor conferir arquivo .txt gerado\n");
    return 0;
}

