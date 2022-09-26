#include<stdio.h>

int main(){

int vet[10], num, cont, posicao;

posicao = 0;

while (posicao < 10){

scanf("%d",&num);

if (posicao == 0){
vet[posicao] = num;
printf("%d\n",vet[posicao]);
posicao = posicao + 1;
}

else{

for(cont = 0; (cont < posicao)&&(vet[cont]!= num); cont++);

if (cont >= posicao){
vet[posicao] = num;
printf("%d\n",vet[posicao]);
posicao++;
}
}
}
return 0;
}
