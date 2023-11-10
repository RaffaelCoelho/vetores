#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");


int tamanho = 4;
int notas[tamanho];
int i;
int somanotas = 0;
float media;


for(i = 0; i < tamanho; i++) {

printf("Digite o %d numero:" , i + 1);
scanf("%d" ,  &notas[i]);

somanotas = somanotas + notas[i];

}

for(i = 0; i < tamanho; i ++) {

printf("%d numero %d \n" , i + 1, notas[i]);

}

media = somanotas / tamanho;

printf("media: %.2f \n" , media);


if (media >= 7)
{
    printf("Aprovado");
}

if (media < 7 && media >= 5)
{
    printf("Recuperação");
}


if (media < 5)
{
    printf("Reprovado");
}









return 0;
}
