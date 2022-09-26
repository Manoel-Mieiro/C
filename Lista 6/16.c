#include <stdio.h>

int main(){
    int m1[4][4], m2[4][4], m3[4][4], i, j, num;
    i = 0;
    j = 0;
    
    
    for(i = 0; i < 4 ; i++){
        for(j = 0; j < 4 ; j++){
        	printf ("\nInsira um valor a matriz 1:\n");
            scanf("%d",&m1[i][j]);
        }
    }
    j = 0;
    i = 0;
    for(i = 0; i < 4 ; i++){
        for(j = 0; j < 4 ; j++){
        	printf ("\nInsira um valor a matriz 2:\n");
            scanf("%d",&m2[i][j]);
        }
    }
    j = 0;
    i = 0;
    for(i = 0; i < 4 ; i++){
        for(j = 0; j < 4 ; j++){
        if (m1[i][j] - m2[i][j] >= 0){
        	m3[i][j] = m1 [i][j];
		}
			else{
				m3[i][j] = m2[i][j];
			}
		}
    }
    j = 0;
    i = 0;
    
    printf ("\nEis a matriz contendo os maiores valores\n");
    for(i = 0; i < 4 ; i++){
        for(j = 0; j < 4 ; j++){
          printf ("\n[%d]", m3[i][j]); 
            }
            printf ("\n");
        }
	getchar ();
	getchar ();
    return 0;
}

