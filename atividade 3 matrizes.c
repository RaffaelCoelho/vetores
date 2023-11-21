#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int tamanholinha = 2;
    int tamanhocoluna = 2;
    int tamanhodisciplinas = 2;
    int tamanhomedia = 2;
    int notas[tamanholinha][tamanhocoluna];
    int i; // linha disciplinas
    int j; // coluna notas
    char disciplinas[tamanhodisciplinas][200];
    float media[tamanhomedia];
    int somanota = 0;

    for (i = 0; i < tamanhodisciplinas; i++)
    {
        fflush(stdin);
        printf("\nDigite o nome da %dº disciplina:", i + 1);
        gets(disciplinas[i]);

        fflush(stdin);

        for (j = 0; j < tamanhocoluna; j++)
        {

            printf("\nDigite a %dº nota da disciplina:", j + 1);
            scanf("%d", &notas[i][j]);

            fflush(stdin);

            somanota = somanota + notas[i][j];
        }
        media[i] = somanota / j;
        somanota = 0;
    }

    // exibição das notas
    printf("\nExibindo dados dos disciplinas...\n");

    for (i = 0; i < tamanholinha; i++)
    {
        printf("\n\nNome da disciplina: %s", disciplinas[i]);

        for (j = 0; j < tamanhocoluna; j++)
        {

            printf("\n %dº nota da disciplina: %d", j + 1, notas[i][j]);
        }
        printf("\n Media do aluno: %.2f", media[i]);

        if (media[i] >= 7)
        {
            printf("\nAprovado!!");
        }

        if (media[i] < 7 && media[i] >= 5)
        {
            printf("\nRecuperação!!");
        }

        if (media[i] < 5)
        {
            printf("\nReprovado!!");
        }
    }

    return 0;
}
