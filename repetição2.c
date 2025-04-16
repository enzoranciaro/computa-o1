#include<stdio.h>
int main()
{

    int n, a=0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n>0)
    {
        if (n>a)
        {
            a=n;
        }
        printf("digite outro numero");
        scanf("%d", &n);
    }
    printf("%d", a);
    return 0;
}
