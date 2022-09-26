#include<stdio.h>

int main() {

char sexo = 0,sexo_menorsalario = 0;
char var = 's';
int idade,maior,menor,idade_menorsalario,qtd_mulheres,qtidadehabitantes;
float salario,menorsalario=999,soma_salario;

idade = 0;
qtidadehabitantes = 0;
qtd_mulheres= 0;
maior = 0;
menor = 200;
idade_menorsalario = 999;
salario = 0;
soma_salario =0;

  while(idade >=0) {

    printf(" \n Informe sua idade: \n");
    scanf("%d",&idade);

     if(idade < 0)
       {
       	printf ("\nIdade invalida, programa encerrado!\n");
        exit (0); //se idade menor que zero, parar a execução do programa
       }
     getchar();
     printf("\nInforme o sexo (M/F): \n");
     scanf("%c",&sexo);
      printf("\n Informe o Salario: \n");
     scanf("%f",&salario);

      if(sexo =='F'||sexo=='f'){
      qtd_mulheres =qtd_mulheres+ 1;       }

      if(salario >= 0 ){

       soma_salario = soma_salario + salario;
       qtidadehabitantes = qtidadehabitantes +1;
      }

     if(idade > maior) {
      maior =idade;
      }

      if(idade < menor) {
       menor = idade;
      }

      if(salario < menorsalario) {
        menorsalario=salario;
      idade_menorsalario = idade;
      sexo_menorsalario = sexo;
      }

}

     printf("\n Eis a media dos salarios do grupo: R$ %f \n",(soma_salario/qtidadehabitantes));
     printf(" Eis a menor idade: %d anos \n",menor);
     printf(" Eis a maior idade: %d anos \n",maior);
     printf(" Eis a quantidade de mulheres na regiao = %d ",qtd_mulheres);
     printf("\n Eis a idade da pessoa e o sexo do que possui o menor salario, foi : %d anos , do sexo :%c \n",idade_menorsalario,sexo_menorsalario);

getchar();
getchar();
return 0;
}

