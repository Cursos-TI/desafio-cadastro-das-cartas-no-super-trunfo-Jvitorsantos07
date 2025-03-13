#include <stdio.h>

int main(){

    unsigned long int populacao1, populacao2;
    float pib_per_capita1, pib_per_capita2, densidade_populacional1, densidade_populacional2;
    char local1[70], local2[70];
    char codigo1, codigo2;
    char sigla1[10], sigla2[10];
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float super_poder1, super_poder2;

// usuário digita os dados da primeira carta//

printf("Digite o código:\n");
scanf("%c", &codigo1);

printf("Digite a identificação:\n");
scanf(" %s", &sigla1);

getchar();
printf("Digite a cidade do jogador 1:\n");
fgets(local1, sizeof(local1), stdin);

printf("Digite a populacao:\n");
scanf("%lu", &populacao1);

printf("Digite o pib: \n");
scanf("%f", &pib1);
        
printf("Digite a area 1:\n");
scanf("%f", &area1);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &pontos_turisticos1);

densidade_populacional1 = pib1 / pontos_turisticos1;
pib_per_capita1 = populacao1 / area1;
super_poder1 = pontos_turisticos1 + pib1 + area1 + pontos_turisticos1 + pib_per_capita1 + densidade_populacional1;

printf("\n");

//usuário digita os dados da segunda carta//

printf("***Digite os dados da segunda carta***\n\n");

printf("Digite o codigo: \n");
scanf(" %c", &codigo2);

printf("Digite a identificação: \n");
scanf(" %s", &sigla2);

getchar();
printf("Digite o Nome da Cidade: \n");
fgets(local2, sizeof(local2), stdin);

printf("Digite a Populacao:\n");
scanf("%lu", &populacao2);

printf(" Digite o PIB: \n");
scanf("%f", &pib2);
        
 printf("Digite a area:\n");
scanf("%f", &area2);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &pontos_turisticos2);

//Calculos de densidade populacional2, pib per capita2 e super poder2//
densidade_populacional2 = pib2 / pontos_turisticos2;
pib_per_capita2 = populacao2 / area2;
super_poder2 = pontos_turisticos2 + pib2 + area2 + pontos_turisticos2 + pib_per_capita2 + densidade_populacional2;



//resultado de todos os dados preenchidos//

printf("Cidades escolhidas foram: %s e %s. \n", local1 , local2);
printf("Todos os dados a seguir serão RESPECTIVOS as cidades citadas acima.\n\n");
printf("População carta1: %lu ,carta2: %lu\n", populacao1, populacao2);
printf("Os PIBs são de carta1 R$:%.2fM Reais, e carta2 R$:%.2fM Reais.\n", pib1, pib2);
printf("Área carta1: %.3fkm², área carta2: %.3fkm².\n", area1, area2);
printf("Pontos turisticos carta1: %d, carta2: %d.\n", pontos_turisticos1, pontos_turisticos2);
printf("Densidade populacional é de: carta1 %.2f, e carta2: %.3lf.\n", densidade_populacional1, densidade_populacional2);
printf("O Pib-Per-Capita da carta1 é:R$ %.2f, e carta2 é:R$ %.3f.\n");

if(densidade_populacional1 > densidade_populacional2){
    printf("Carta1 - %s Densidade populacional é %.1lf\n",local1, densidade_populacional1);
    printf("Carta2 - %s Densidade populacional é %.1lf\n",local2, densidade_populacional2);
    printf("Carta1 %s Venceu!!!\n", local1);
}else{
    printf("Carta1 - %s Densidade populacional é %.1lf\n",local1, densidade_populacional1);
    printf("Carta2 - %s Densidade populacional é %.1lf\n",local2, densidade_populacional2);
    printf("Carta2 %s Venceu!!!\n", local2);
    
}
printf("\n\n");



    return 0;

}