#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int dia;
    int mes;
    int ano;
} Pessoa;

int main()
{
    Pessoa pessoas[6], mais_nova, mais_velha;

    for(int i = 0; i < 6; i++)
    {
        scanf("%s", pessoas[i].nome);
        scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
    }

    mais_nova = mais_velha = pessoas[0];

    for(int i = 1; i < 6; i++)
    {
        if((pessoas[i].ano > mais_nova.ano) || (pessoas[i].ano == mais_nova.ano && pessoas[i].mes > mais_nova.mes) || (pessoas[i].ano == mais_nova.ano && pessoas[i].mes == mais_nova.mes && pessoas[i].dia > mais_nova.dia))
        {
            mais_nova = pessoas[i];
        }

        if((pessoas[i].ano < mais_velha.ano) || (pessoas[i].ano == mais_velha.ano && pessoas[i].mes < mais_velha.mes) || (pessoas[i].ano == mais_velha.ano && pessoas[i].mes == mais_velha.mes && pessoas[i].dia < mais_velha.dia))
        {
            mais_velha = pessoas[i];
        }
    }

    printf("A pessoa mais nova eh: %s.\n", mais_nova.nome);
    printf("A pessoa mais velha eh: %s.\n", mais_velha.nome);

    return 0;
}