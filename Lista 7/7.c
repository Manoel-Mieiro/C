#include <stdio.h>
#include <string.h>

int main(){

    char palavra[51];
    int i, length;

    printf("Insira uma palavra: ");
    gets(palavra);

    length = strlen(palavra);

    while (length > 50){
        printf("Voce excedeu a quantidade de caracteres permitidos, favor inserir outra palavra: ");
        gets(palavra);

        length = strlen(palavra);
    }

    printf("\nEis a palavra com seu valor ASCII alterado: ");

    for (i = 0; i < length; i++){
            printf("%c", palavra[i]+1);
    }

    return 0;
}
