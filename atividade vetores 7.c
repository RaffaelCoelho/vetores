#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){

setlocale(LC_ALL, "portuguese");


int tamanho = 3;
float numeros [tamanho];
int i;

for(i = 0; i < tamanho; i++) {

printf("Digite o %dº numero:" , i + 1);
scanf("%f" ,  &numeros [i]);



if (numeros[i] < 0)
{
    numeros[i] = 0;
}



}
system("cls||clear");

for(i = 0; i < tamanho; i++) {

printf("\n%dº numero do vetor é: %.2f", i + 1 , numeros[i]);

}

return 0;


}
