#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

int calculaDias(Data d)
{
    return d.ano * 365 + d.mes * 30 + d.dia;
}

int main()
{
    Data d1, d2;
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    int dias1 = calculaDias(d1);
    int dias2 = calculaDias(d2);
    int diferenca = dias2 - dias1;

    printf("A diferença entre as duas datas é de %d dias.\n", diferenca);

    return 0;
}