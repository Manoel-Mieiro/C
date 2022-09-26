#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
	int main() {
  int aleatorio[50]; 
  srand(time(NULL)); 
  int cont, j, achou, num;
  for (cont = 0; cont < 25; cont++) {
    do {
      achou = 0; 
      num = rand() % 99 +1;

      for (j = 0; j < 25; j++)
        if (num == aleatorio[j])
          achou = 1; 

    } while (achou);
    aleatorio[cont] = num;

  }
  for (j = 0; j < 25; j++){
  if (j%5==0)
		printf("\n");
		printf("[%d]",aleatorio[j]);
		}
}
