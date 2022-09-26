#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetorA[10];
    int vetorB[10];
    int vetorAB[20];
    int ate = 0;
	int i, j, k, v, z, u, achou;

    for(i = 0; i < 10; i++){
        printf("Digite um valor para o vetorA[%d]:", i);
        scanf("%d",&vetorA[i]);
    }
    printf("\n");
    for(j = 0; j < 10; j++){
        printf("Digite um valor para o vetorA[%d]:", j);
        scanf("%d",&vetorB[j]);
    }
    printf("\n");

    for(k = 0; k < 10; k++){
        vetorAB[k] = vetorA[k];
    }

    for(v = 0; v < 10; v++){
        achou = 0;
        for(z = 0; z < 10; z++){
            if(vetorB[v] == vetorA[z]){
                achou = 1;
                break;
            }
        }
        if(achou == 0){
            vetorAB[10+ate] = vetorB[v];
            ate = ate + 1;	
        }
    }
    for(u = 0; u < 10 + ate; u++){
        printf("%d ", vetorAB[u]);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
