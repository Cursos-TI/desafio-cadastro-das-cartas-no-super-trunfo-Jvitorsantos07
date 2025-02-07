#include <stdio.h>

int main(){

    printf("****** Desafio Cartas Super Trunfo****** \n\n");
    printf("******Cadastre sua carta******\n\n");
    
    //cadastro das variaveis//
    double populacao, area, pib, pib_per_capita, densidade_populacional;
    int pontos_turisticos;
    char local[50];

    //captação de dados do usuario//
    printf("   Digite o local:\n");
    fgets(    local, sizeof(local), stdin);
    
    printf("   Digite o numero da populacao:\n");
    scanf("    %lf", &populacao);

    printf("   Digite a area:\n");
    scanf("    %lf", &area);

    printf("   Digite o PIB:\n");
    scanf("    %lf", &pib);

    printf("   Digite o numero de pontos turisticos:\n");
    scanf("    %d", &pontos_turisticos);

    printf("\n");

    //calculo do pib per capita e densidade populacional//
    pib_per_capita = pib / populacao;
    densidade_populacional = populacao / area;

    //apresenta todos os dados da carta um por linha//
    printf("   Local escolhido: %s\n\n", local);
    printf("   Populacao: %.1lf\n\n", populacao);
    printf("   Area: %.1lfkm\n\n", area);
    printf("   Pib é de %.1lf\n\n", pib);
    printf("   Pontos Turisticos: %d\n\n", pontos_turisticos);
    printf("   %.1lf é o pib per capita da região\n\n", pib_per_capita);
    printf("   %.1lf é a densidade populacional\n\n", densidade_populacional);

    printf("******Fim do Cadastro******\n\n");


    return 0;
    
}