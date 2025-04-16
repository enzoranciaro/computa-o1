#include<stdio.h>
int main()
{

    int n;
    float contagem, soma=0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n>-1000)
    {
        if (n>0)
        {
            soma= soma+ n;
            contagem++;
        }
        printf("digite outro numero");
        scanf("%d", &n);
    }
    printf("\nquantidade de vezes que o numero positivo foi colocado: %f", contagem);
    printf("\na media é: %f", soma/contagem);
    return 0;
}
