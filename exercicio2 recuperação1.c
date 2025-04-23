#include<stdio.h>
#include<math.h>
int main()
{
    int numeroB, valorI, valorF, conta;

    printf("digite um numero base");
    scanf("%d", &numeroB);

    printf("digite o valor inicial");
    scanf("%d", &valorI);

    printf("digite o valor final");
    scanf("%d", &valorF);

    for(int i = valorI; i <= valorF; i++)
    {
        if (numeroB * valorI > valorF)
        {
            break;
        }
        conta = conta + numeroB * valorI;
        valorI++;



    }
    printf("a soma total é %d", conta);
    return 0;
}
