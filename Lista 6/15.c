#include <stdio.h>

int main(){
    int matriz[5][5], i, j, l, c, num, cont=0;
    l = 0;
    c  = 0;
    
    
    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
        	printf ("\nInsira um valor a matriz:\n");
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Entre com o numero a ser procurado: ");
    scanf("%d", &num);
    printf("\n");
    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            if(matriz[i][j] == num){
               l= i;
               c = j;
               cont = 1;
            }
        }
    }
	
    if(cont == 1){
        printf("Numero %d encontrado na linha %d e  %d coluna", num, l, c);
    }else{
        printf("Numero nao encontrado");
    }

	getchar ();
	getchar ();
    return 0;
}

