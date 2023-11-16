#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int tamanho = 5;
    int numeros[tamanho];
    int i;
    int contadorpar = 0;
    int contadorimpar = 0;
    int contadortotal = 0;
    int contadornegativo = 0;
    int contadorpositivo = 0;
    float mediapar = 0;
    float mediatotal = 0;
    float mediaimpar = 0;
    int somapar = 0;
    int somatotal = 0;
    int somaimpar = 0;
    int maior = 0;
    int menor = 9999;

    for (i = 0; i < tamanho; i++)
    {

        printf("\nDigite o %dº numero:", i + 1);
        scanf("%d", &numeros[i]);

        contadortotal++;
        somatotal = somatotal + numeros[i];
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }

        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }

        if (numeros[i] % 2 != 0)
        {
            somaimpar = somaimpar + numeros[i];
            contadorimpar++;
        }
        else
        {
            somapar = somapar + numeros[i];
            contadorpar++;
        }

        if (numeros[i] > 0)
        {
            contadorpositivo++;
        }
        else
        {
            contadornegativo++;
        }
    }

    mediapar =(float) somapar / contadorpar;
    mediaimpar = (float)somaimpar / contadorimpar;
    mediatotal =(float) somatotal / tamanho;

    system("cls||clear");

    printf("\nQuantidade de numeros pares: %d", contadorpar);
    printf("\nQuantidade de numeros impares: %d", contadorimpar);
    printf("\nQuantidade de numeros negativos: %d", contadornegativo);
    printf("\nQuantidade de numeros positivos: %d", contadorpositivo);
    printf("\nQuantidade de numeros: %d", contadortotal);
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\nMedia dos numeros pares: %.2f", mediapar);
    printf("\nMedia dos numeros impares: %.2f", mediaimpar);
    printf("\nMedia dos numeros: %.2f", mediatotal);
    for (i = tamanho - 1; i >= 0; i--)
    {

        printf("\n%dª numero: %d", i + 1, numeros[i]);
    }

    return 0;
}
