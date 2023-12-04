#include <stdio.h>
#include <math.h>

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

int main()
{
    Retangulo ret;
    scanf("%d %d", &ret.superiorEsquerdo.x, &ret.superiorEsquerdo.y);
    scanf("%d %d", &ret.inferiorDireito.x, &ret.inferiorDireito.y);

    int largura = ret.inferiorDireito.x - ret.superiorEsquerdo.x;
    int altura = ret.superiorEsquerdo.y - ret.inferiorDireito.y;
    int area = largura * altura;
    int perimetro = 2 * (largura + altura);
    double diagonal = sqrt(largura * largura + altura * altura);

    printf("Area: %d\n", area);
    printf("Perimetro: %d\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}