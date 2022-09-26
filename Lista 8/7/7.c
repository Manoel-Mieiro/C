#include <stdio.h>

int main (){
	char car;
	int vogal = 0;
	
	FILE*arq;
	
	arq = fopen("arq.txt", "r");
	
	while (fscanf (arq, "%c", &car) != EOF){
		if (car == 'A' || car == 'a')
		vogal++;
		else if (car =='E' || car == 'e')
		vogal++;
		else if (car =='I' || car == 'i')
		vogal++;
		else if (car =='O' || car == 'o')
		vogal++;
		else if (car =='U' || car == 'u')
		vogal++;
	}
	fclose (arq);
	
	printf ("Eis o numero de vogais: %d", vogal);
	return 0;
}
