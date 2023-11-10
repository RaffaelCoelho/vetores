#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");


int tamanho = 5;
int notas[tamanho];
int i;
int maior = 0;
int contadorpar = 0;
int contadorimpar = 0;

for(i = 0; i < tamanho; i++) {

printf("Digite o %d numero:" , i + 1);
scanf("%d" ,  &notas[i]);

if (notas[i] % 2 > 0)
{
  contadorimpar++;

}


if (notas[i] % 2 == 0)
{
  contadorpar++;

}

}

for(i = 0; i < tamanho; i ++) {

printf("%d numero %d \n" , i + 1, notas[i]);


}

printf("quantidade de numeros impares: %.d \n" , contadorimpar);
printf("quantidade de numeros pares: %.d \n" , contadorpar);


return 0;

}