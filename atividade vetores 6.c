#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){

setlocale(LC_ALL, "portuguese");


int tamanho = 10;
float numeros [tamanho];
int i;
int contadornegativo = 0;
float somadosnumeros = 0;

for(i = 0; i < tamanho; i++) {

printf("Digite o %dº numero:" , i + 1);
scanf("%f" ,  &numeros [i]);



if (numeros[i] < 0)
{
    contadornegativo++;
}
else{

somadosnumeros += numeros[i];

}


}
system("cls||clear");


printf("\nQuantidade de numeros negativos: %d", contadornegativo);
printf("\nSoma dos numeros: %.2f", somadosnumeros);

return 0;


}
