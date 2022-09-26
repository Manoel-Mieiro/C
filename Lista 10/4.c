#include <stdio.h>
struct Aluno{
    int matricula;
    char nome[50];
    float n1, n2, n3;
}alunos[5];

int main(){
    int i, maior_n1, maior_media, menor_media;
    float aux1, aux2, aux3;
    for(i = 0; i < 5; i++){
        printf("Entre com a matricula: ");
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);

        printf("Entre com o nome: ");
        gets(alunos[i].nome);
        fflush(stdin);

        printf("Entre com a nota 1: ");
        scanf("%f", &alunos[i].n1);

        printf("Entre com a nota 2: ");
        scanf("%f", &alunos[i].n2);

        printf("Entre com a nota 3: ");
        scanf("%f", &alunos[i].n3);
    }
    /*encontra maior primeira nota*/
	aux1 = alunos[0].n1;
    maior_n1 = 0;
    /*encontra a maior nota dentre todas*/
    for(i = 1; i < 5; i++){
            if(aux1 < alunos[i].n1)
                maior_n1 = i;
    }
	/*aux2 e aux3 auxiliarão com a comparação das médias
	 inicialmente ambos iniciam com a media do primeiro aluno*/
    aux2 = (alunos[0].n1 + alunos[0].n2 + alunos[0].n3)/3;
    aux3 = aux2;
    maior_media = 0;
    menor_media = 0;
	/*encontra a posição da maior e menor media*/
    for(i = 1; i < 5; i++){
            if(aux2 < (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3){
                 aux2 = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;
                 maior_media = i;
            }
            if(aux3 > (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3){
                aux3 = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;
                menor_media = i;
            }
    }
	/*impressão dos resultados*/
    printf("\nMaior nota1: %s nota1: %.2f\n",alunos[maior_n1].nome, alunos[maior_n1].n1);
    printf("\nMaior media geral: %s  Media geral: %.2f\n", alunos[maior_media].nome, (alunos[maior_media].n1 + alunos[maior_media].n2 + alunos[maior_media].n3)/3 );
    printf("\nMenor media geral: %s  Media geral: %.2f\n", alunos[menor_media].nome, (alunos[menor_media].n1 + alunos[menor_media].n2 + alunos[menor_media].n3)/3 );

     for(i = 0; i < 5; i++){
         printf("\nNome: %s     ",alunos[i].nome);
         if((alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3 >=6){
            printf("  Aprovado!\n");
         }else{
             printf("  Reprovado!\n");
         }
     }
    return 0;
}


