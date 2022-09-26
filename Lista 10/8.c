#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Favor, acessar as ferramentas do dev c++ no menu "opções do compilador", n aba de configurações e em seguida no submenu "geração de código"
//Lá, selecione em linguagem padrão (-std) a ISO99
void main(void){
    int teste;
    struct lista{
        char nome[30];
        char tel[16];
    };

    struct lista phone_book[5];
    struct lista swap;

    swap.nome[49]='\0';
    swap.tel[10]='\0';

    for(int x=0; x<5; x++){
        printf("Digite o nome: ");
        scanf("%s",phone_book[x].nome);
        fflush(stdin);
        printf("Digite um numero :") ;
        scanf("%%s",phone_book[x].tel);
        fflush(stdin);
        printf("\n");
    }

        do{
            teste=0;
            for(int x=1; x<5; ++x){
                if(phone_book[x].nome[0]<phone_book[x-1].nome[0]){
                swap       = phone_book [x];
                phone_book [x]   = phone_book [x-1];
                phone_book [x-1] = swap;
                teste=1;
                }
            }

        }while(teste!=0);

    for(int x=0;x<5;x++){
        printf("%s\t",phone_book[x].nome);
    }
}
