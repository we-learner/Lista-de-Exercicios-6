#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Ponto;

typedef struct
{
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

int pontoDentroRetangulo(Ponto p, Retangulo r)
{
    return p.x >= r.superiorEsquerdo.x && p.x <= r.inferiorDireito.x && p.y >= r.inferiorDireito.y && p.y <= r.superiorEsquerdo.y;
}

int main()
{
    Retangulo ret;
    Ponto p;

    scanf("%d %d", &ret.superiorEsquerdo.x, &ret.superiorEsquerdo.y);
    scanf("%d %d", &ret.inferiorDireito.x, &ret.inferiorDireito.y);
    scanf("%d %d", &p.x, &p.y);

    if (pontoDentroRetangulo(p, ret))
    {
        printf("O ponto esta dentro do retangulo.\n");
    }
    else
    {
        printf("O ponto nao esta dentro do retangulo.\n");
    }

    return 0;
}