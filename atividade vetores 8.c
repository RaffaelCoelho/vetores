#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){

setlocale(LC_ALL, "portuguese");


int tamanho = 6;
int numeros [tamanho];
int i;

for(i = 0; i < tamanho; i++) {

printf("\nDigite o %dº numero:" , i + 1);
scanf("%d" ,  &numeros [i]);



if (numeros[i] % 2 != 0)
{
    i = i - 1;
    printf("\nDigite o numero novamente...");
}



}
system("cls||clear");

for(i = tamanho - 1; i >= 0; i--) {

printf("\n%dª numero par: %d", i + 1 , numeros[i]);

}

return 0;


}
