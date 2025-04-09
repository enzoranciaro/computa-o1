#include<stdio.h>
int main()
{
    float A, G, EA, EG, consumoA, consumoG;

    printf("digite o preço do alcool e o preço da gasolina, a eficiencia do alcool e a eficiencia da gasolina");
    scanf("%f %f %f %f", &A, &G, &EA, &EG);

    consumoA = (EA/A);
    consumoG = (EG/G);
    if
    ( EA/A < EG/G)
        printf("gasolina é a melhor opção");
    else if (EA/A > EG/G)
        printf("alcool é a melhor opção");
    else
        printf("gasolina ainda é a melhor opção");
    return 0;
}

