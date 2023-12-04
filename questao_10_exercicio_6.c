#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

void ordenarPorIdade(Atleta atletas[], int n)
{
    int i, j;
    Atleta temp;

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(atletas[j].idade < atletas[j+1].idade)
            {
                temp = atletas[j];
                atletas[j] = atletas[j+1];
                atletas[j+1] = temp;
            }
        }
    }
}

int main()
{
    Atleta atletas[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%s", atletas[i].nome);
        scanf("%s", atletas[i].esporte);
        scanf("%d", &atletas[i].idade);
        scanf("%f", &atletas[i].altura);
    }

    ordenarPorIdade(atletas, 5);

    printf("Atletas ordenados por idade do mais velho para o mais novo:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", atletas[i].nome);
    }

    return 0;
}