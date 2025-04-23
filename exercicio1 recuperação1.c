#include<stdio.h>
#include<math.h>
int main()
{

    float altura, largura, tinta2;
    float area, tinta;

    printf("digite a altura da parede em metros");
    scanf("%f", &altura);

    printf("digite a largura da parede em metros");
    scanf("%f", &largura);

    area= altura * largura;
    tinta= area / 2;
    tinta2 = floor(tinta);
    printf("a area é %f", area);

    if (tinta== tinta2)
    {
        printf("a quantidade de tinta é %f", tinta);

    }
    else
    {
        printf("a quantidade de tinta é %f", tinta2 +1);
    }
    return 0;
}
