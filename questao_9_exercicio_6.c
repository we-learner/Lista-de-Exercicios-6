#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

int main()
{
    Atleta atletas[5];
    int i, mais_velho = 0, mais_alto = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%s", atletas[i].nome);
        scanf("%s", atletas[i].esporte);
        scanf("%d", &atletas[i].idade);
        scanf("%f", &atletas[i].altura);

        if(atletas[i].idade > atletas[mais_velho].idade)
        {
            mais_velho = i;
        }

        if(atletas[i].altura > atletas[mais_alto].altura)
        {
            mais_alto = i;
        }
    }

    printf("O atleta mais velho eh: %s.\n", atletas[mais_velho].nome);
    printf("O atleta mais alto eh: %s.\n", atletas[mais_alto].nome);

    return 0;
}