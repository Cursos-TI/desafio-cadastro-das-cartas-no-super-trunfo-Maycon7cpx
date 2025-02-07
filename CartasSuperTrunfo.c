#include <stdio.h>

int main (){ 
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;

    printf("população: \n");
    scanf("%d", &populacao );

    printf("Area (km²): \n");
    scanf("%f", &area);

    printf("pib(em bilhões): \n");
    scanf("%f", &pib);

    printf("numeros de pontos turisticos");
    scanf("%d", &pontos_turisticos);

   printf("populacao: %d\n", populacao);
   printf("area: %f\n", area);
   printf("pib: %f\n", pib);
   printf("pontos turisticos: %d\n", pontos_turisticos);

   return 0;

   }