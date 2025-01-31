#include <stdio.h>

int main(){

    printf("Cartas Super Trunfo \n\n");

    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char local[50];

    printf("Digite o local:\n");
    scanf("%s", &local);
    
    printf("Digite o numero da populacao:\n");
    scanf("%f", &populacao);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    return 0;
    
}