#include<stdio.h>

main(){
    int i, vet[20], num, iguais=0, maior=0, menor=0;
    
    
    for(i=0; i<20; i++){
        printf("\nDigite o valor de numero %d : \n" ,i+1);
        scanf("%d", &num);
        vet[i]=num;
        
        if(vet[0]==vet[i]){
            iguais++;
        }
        if(vet[0]<vet[i]){
            maior++;
        }
        if(vet[0]>vet[i]){
            menor++;
        }
    }
    printf("\nEis os numeros maiores que o primeiro valor: %d\n", maior);
    printf("\nEis os numeros iguais ao primeiro valor: %d\n", iguais-1);
    printf("\nEis os numeros menores que o primeiro valor: %d\n", menor);
    
    
    getchar ();
    getchar ();
    return 0;
}
