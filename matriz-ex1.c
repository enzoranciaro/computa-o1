#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 5

int main(){
int matriz[TAM][TAM];
srand(time(NULL));
printf("matriz original: \n");
for(int i=0; i<TAM; i++){
    for(int j=0; j<TAM; j++)
    {
        matriz[i][j]=rand()% 100;
        printf("%3d",matriz[i][j]);
    }
    printf("\n");
}

printf("matriz transposta: \n");
for(int i=0; i<TAM; i++)
{
    for(int j=0; j<TAM; j++)
    {
        matriz[i][j]=rand()% 100;
        printf("%3d",matriz[j][i]);
    }
    printf("\n");
}
return 0;
}
