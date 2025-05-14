#include<stdio.h>
void convertehora(int total, int *hora, int *mim, int *seg);
int main()
{
    int total, segundos, minutos, hora;
    printf("informe a quantidade de segundos: ");
    scanf("%d", &segundos);

    printf("a conversao eh: ");
    convertehora(total, &segundos, &minutos, &hora);
    printf("%02d:%02d:%02d", hora, minutos, segundos);

    return 0;
}
void convertehora(int total, int *hora, int *mim, int *seg);
{
    *hora = total/ 3600;
    *mim = (total% 3600)/60;
    *seg = total% 60;
}
