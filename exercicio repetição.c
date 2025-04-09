#include<stdio.h>
int main()
{
    int n, i = 1, a=1;
    printf("digite um numero");
    scanf("%d", &n);

    while(i<=100)
    {
        if (a%n== 2)
        {
            printf("\n%d", a);

        }
        i++;
        a++;
    }






    return 0;
}
