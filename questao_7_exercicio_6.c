#include <stdio.h>

typedef struct
{
    int hora;
    int minuto;
    int segundo;
} Hora;

int main()
{
    Hora vetor[5];
    Hora maiorHora = {0, 0, 0};

    for(int i = 0; i < 5; i++)
    {
        scanf("%d %d %d", &vetor[i].hora, &vetor[i].minuto, &vetor[i].segundo);

        if(vetor[i].hora > maiorHora.hora)
        {
            maiorHora = vetor[i];
        }
        else if(vetor[i].hora == maiorHora.hora)
        {
            if(vetor[i].minuto > maiorHora.minuto)
            {
                maiorHora = vetor[i];
            }
            else if(vetor[i].minuto == maiorHora.minuto)
            {
                if(vetor[i].segundo > maiorHora.segundo){
                    maiorHora = vetor[i];
                }
            }
        }
    }

    printf("A maior hora eh: %02d:%02d:%02d\n", maiorHora.hora, maiorHora.minuto, maiorHora.segundo);

    return 0;
}