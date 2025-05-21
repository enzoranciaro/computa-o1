#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Digite o número de linhas (n): ");
    scanf("%d", &n);

    int triangulo[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                triangulo[i][j] = 1;
            }
            else
            {
                triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
            }
        }
    }

    printf("\nTriângulo de Pascal: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%4d", triangulo[i][j]);
        }
        printf("\n");
    }

    return 0;
}
