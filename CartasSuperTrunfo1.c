#include <stdio.h>

int main(){

    printf("Cartas Super Trunfo \n\n");

    float populacao, area, pib;
    int pontos_turisticos;
    char local[50];

    printf("Digite o local:\n");
    fgets(local, sizeof(local), stdin);
    
    printf("Digite o numero da populacao:\n");
    scanf("%g", &populacao);

    printf("Digite a area:\n");
    scanf("%g", &area);

    printf("Digite o PIB:\n");
    scanf("%g", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Local: %s\n", local);
    printf("Populacao: %g\n", populacao);
    printf("Area: %g\n", area);
    printf("Pib: %g\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    return 0;
    
}