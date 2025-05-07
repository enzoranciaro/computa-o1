#include<stdio.h>
#include<math.h>
int arredondar (float numero)
{
    return round(numero);
}
int main()
{
    float x;
    printf("escreva um numero");
    scanf("%f", &x);
    printf("o numero eh: %d", arredondar(x));
    return 0;
}
