#include <stdio.h>
int SomaDivisores(int n);
int main(){
 int numero, i;
 
 for(i = 0; i < 5; i++){
 printf("digite o %d n�mero: ", i+1);
 scanf("%d", &numero);
 printf("\n\tSoma dos divisores: %d\n", SomaDivisores(numero));
 }
 return 0;
}
int SomaDivisores(int n){
 int i = 1, soma = 0;
 printf("\tdivisores de %d: ", n);
 while( i < n ){ // La�o de repeti��o que vai de 1 at� o valor de N
 if (n % i == 0){ // O n�mero N � divis�vel por i.
 soma += i; // Soma os divisores
 printf("%d, ", i );
 }
 i++;
 }
 
 return soma;
}

