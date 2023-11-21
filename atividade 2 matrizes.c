#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int tamanholinha = 2;
    int tamanhocoluna = 2;
    int tamanhoalunos = 2;
    int tamanhomedia = 2;
    int notas[tamanholinha][tamanhocoluna];
    int i; // linha alunos
    int j; // coluna notas
    char alunos[tamanhoalunos][200];
    float media[tamanhomedia];
    int somanota = 0;

    for (i = 0; i < tamanhoalunos; i++)
    {
        fflush(stdin);
        printf("\nDigite o nome do %dº aluno:", i + 1);
        gets(alunos[i]);

        fflush(stdin);

        for (j = 0; j < tamanhocoluna; j++)
        {

            printf("\nDigite a %dº nota do aluno:", j + 1);
            scanf("%d", &notas[i][j]);

            fflush(stdin);

            somanota = somanota + notas[i][j];
            
        }
      media[i] = somanota / j;
      somanota = 0;
    
    }

    // exibição das notas
    printf("\nExibindo dados dos alunos...\n");

    for (i = 0; i < tamanholinha; i++)
    {
        printf("\n\nNome do aluno: %s", alunos[i]);
            
        for (j = 0; j < tamanhocoluna; j++)
        {

           
            printf("\n %dº nota do aluno: %d", j + 1, notas[i][j]);
        
        }
         printf("\n Media do aluno: %.2f", media[i]);
    }

    return 0;
}
