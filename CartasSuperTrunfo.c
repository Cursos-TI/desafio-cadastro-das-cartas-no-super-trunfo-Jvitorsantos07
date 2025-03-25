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

    printf("***Bem-vindo ao jogo Super Trunfo***\n");
    printf("Vamos iniciar...\n\n");

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

//Calculos de densidade populacional1, pib per capita1 e super poder1//

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

printf("\n\n");

//resultado de todos as comparações feitas//

printf("Comparação de cartas:\n");

if (populacao1> populacao2)
{
    printf("População: Carta 1 venceu!\n");
}else{
    printf("População: Carta 2 venceu!\n");
}
if (pib1 > pib2)
{
    printf("PIB: Carta 1 venceu!\n");
}else{
    printf("PIB: Carta 2 venceu!\n");
}
if (area1 > area2)
{
    printf("Área: Carta 1 venceu!\n");
}else{
    printf("Área: Carta 2 venceu!\n");
}
if (pontos_turisticos1 > pontos_turisticos2)
{
    printf("Papontos Turísticos: Carta 1 venceu!\n");
}else{
    printf("Pontos Turísticos: Carta 2 venceu!\n");
}
if (pib_per_capita1 > pib_per_capita2)
{
    printf("Pib per Capita: Carta 1 venceu!\n");
}else
{
    printf("Pib per Capita: Carta 2 venceu!\n");
}
if (densidade_populacional1 < densidade_populacional2)
{
    printf("Densidade Populacinal Menor: Carta 1 venceu!\n");
}else
{
    printf("Densidade Populacional Menor: Carta 2 venceu!\n");
}
if (super_poder1 > super_poder2)
{
    printf("Super Poder: Carta 1 venceu!\n");
}else
{
    printf("Super Poder: Carta 2 venceu!\n");
}

printf("\n\n");



    return 0;

}