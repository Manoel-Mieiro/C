#include <stdio.h>

int main(){
	int count = 1;
	char caractere;
	
	FILE*arq;
	
	arq = fopen("arq.txt", "r");
	
	while (fscanf(arq, "%c", &caractere) != EOF)
		if (caractere == '\n')
		count++;
	fclose (arq);
	
	printf ("O arquivo conta com %d linha(s).", count);
	return 0;
}
