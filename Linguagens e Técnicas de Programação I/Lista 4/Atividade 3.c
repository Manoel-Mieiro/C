#include <stdio.h>

int main(){

int i, j, m[5][5], v[5];


printf("\nInforme os elementos do vetor: \n");

for(i=0;i<5;i++){

printf("Elemento[%d]= ",i);

scanf("%d",&v[i]);

}

printf("\nInforme os elementos da matriz: \n");

for(i=0;i<5;i++)

for(j=0;j<5;j++){

printf("Elemento[%d][%d]= ",i,j);

scanf("%d",&m[i][j]);

}


printf("\nEis os valores originais do vetor: \n");

for(i=0;i<5;i++)

printf("%d ",v[i]);

printf("\nEis os valores originais da matriz: \n");

for(i=0;i<5;i++){

for(j=0;j<5;j++)

printf("%d ",m[i][j]);

printf("\n");

}

for(i=0;i<5;i++)

for(j=0;j<5;j++)

m[i][j]=v[i]*m[i][j];

printf("\nEis os valores multiplicados: \n");

for(i=0;i<5;i++){

for(j=0;j<5;j++)

printf("%d ",m[i][j]);

printf("\n");

}

getchar ();
getchar ();
return 0;

}
