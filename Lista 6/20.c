#include<stdio.h>

int main()

{

int matriz[3][3], vet[3], x, y;

for(x=0;x<3;x++)

{  

 for(y=0;y<3;y++)

{  

printf("Digite o valor da matriz para a posicao (%d , %d) \n", x , y);

  scanf( "%d", &matriz[x][y]);  

}  

 vet[x]=0;  

}  

for(y=0;y<3;y++)

{  

 for(x=0;x<3;x++)

 {

  vet[y]=vet[y]+matriz[x][y];  

 }  

}  

for(x=0;x<3;x++)

{

   printf(" %d  ", vet[x]);  

   }  

getchar ();
getchar ();
return 0;

}


