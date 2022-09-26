#include<stdlib.h>
#include<stdio.h>
int main(){
	int i, vet[10], aux[10], j, k;
	for(i=0;i<10;i++){
		printf ("\nInsira um numero ao vetor:	");
		scanf("%d", &vet[i]);
		for(j=0;j<i; j++){
		if(vet[i]==vet[j]){
			printf("\nNumero repetido, entre com outro.\n");
			i--;
			
			continue;
			
			
		
		}
	}
	}

	for(i=0;i<10;i++){
		printf("\n%d\n", vet[i]);
	}
	system("pause");
	return 0;
}
