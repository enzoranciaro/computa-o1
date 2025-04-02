#include<stdio.h>
int main()
{

    float hora, min, seg;
    float aux = 5.5;

    printf("digite hora, min, seg");
    scanf("%f %f %f", &hora, &min, &seg);

    // se hora maior que 1 e minuto maior que 15
    if (hora>1, min>15)
    {
        printf("quantidade de segundos:%f ", (hora*3600)+(min*60)+(seg));
    }
    // casocontrario
    else
    {
        printf("quantidade de minutos: ", (hora*60)+(min)+(seg/60));
    }

    printf("horario; %02d:%02d:%02d\n", (int)hora, (int)min, (int)seg);
    printf("float com duas casas: %2f", aux);
    return 0;
}
