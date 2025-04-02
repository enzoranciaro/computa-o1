#include<stdio.h>
int main()
    float n1, n2, n3, media;

   printf("digite as tres notas:");
   scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    if (media > 8)
      printf("aprovado com distinção");
    else if (media >= 6)
      printf("aprovado");
    else if (media >=4)
              printf ("vai paraa final");
    else
              printf("reprovado");
}
