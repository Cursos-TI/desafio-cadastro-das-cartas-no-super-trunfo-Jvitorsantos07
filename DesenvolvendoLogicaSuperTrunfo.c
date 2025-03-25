#include <stdio.h>

int main(){

    double pib_per_capita1, pib_per_capita2, densidade_populacional1, densidade_populacional2;
    char local1[50], local2[50];
    int pontos_turisticos1, pontos_turisticos2, populacao1, populacao2;
    int area1, area2;
    float pib1, pib2;
    int atributo1, atributo2;

printf("***Bem-vindo ao jogo Super Trunfo***\n");
printf("Vamos iniciar...\n\n");

// usuário digita os dados da primeira carta//
printf("Digite o local do jogador 1:\n");
fgets(local1, sizeof(local1), stdin);

printf("Digite a populacao:\n");
scanf("%d", &populacao1);

printf("Digite o pib: \n");
scanf("%f", &pib1);
        
printf("Digite a area 1:\n");
scanf("%d", &area1);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &pontos_turisticos1);

//cálculo da densidade populacional e pib per capita//
densidade_populacional1 = pib1 / pontos_turisticos1;
pib_per_capita1 = populacao1 / area1;
printf("\n");

//usuário digita os dados da segunda carta//

printf("***Digite os dados da segunda carta***\n\n");

getchar();
printf("Digite o Local do jogador 2: \n");
fgets(local2, sizeof(local2), stdin);

printf("Digite a Populacao:\n");
scanf("%d", &populacao2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);
        
printf("Digite a area:\n");
scanf("%d", &area2);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &pontos_turisticos2);

densidade_populacional2 = pib2 / pontos_turisticos2;
pib_per_capita2 = populacao2 / area2; 

printf("\n\n");

//apresenta e solicita ao usuário o primeiro atributo a ser comparado//
printf("**Escolha o 1ª atributo a ser comparado**\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Numero de Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
printf("Escolha foi: ");
scanf("%d", &atributo1);

printf("\n");

//apresenta e solicita ao usuário o segundo atributo a ser comparado//
printf("**Escolha o 2ª atributo a ser comparado**\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Numero de Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
printf("Escolha foi: ");
scanf("%d", &atributo2);

printf("\n\n");

//início da apresentação dos resultados//

printf("Os locais escolhidos foram: ");
printf("%s e %s \n", local1, local2);

printf("Atributos escolhidos foram: \n");

switch (atributo1){
case 1: printf("População"); break;
case 2: printf("Área"); break;
case 3: printf("PIB"); break;
case 4: printf("Número de pontos turísticos"); break;
case 5: printf("Densidade Demográfica"); break;
default:
    printf("Opção inválida.\n");
    
}
printf(" e ");

switch (atributo2){
    case 1: printf("População"); break;
    case 2: printf("Área"); break;
    case 3: printf("PIB "); break;
    case 4: printf("Número de pontos turísticos"); break;
    case 5: printf("Densidade Demográfica"); break;
    default:
        printf("Opção inválida.\n");
        
    }
    printf("\n");

    //apresentação de atributos//

    switch (atributo1)
    {
    case 1:printf("Atributos - carta 1: %d , carta 2: %d ",populacao1, populacao2);break;
    case 2:printf("Atributos - carta 1: %d , carta 2: %d ",area1, area2);break;
    case 3:printf("Atributos - carta 1: %f , carta 2: %f ",pib1, pib2);break;
    case 4:printf("Atributos - carta 1: %d , carta 2: %d ",pontos_turisticos1, pontos_turisticos2);break;
    case 5:printf("Atributos - carta 1: %f , carta 2: %f ",densidade_populacional1, densidade_populacional2);break;
    
    default:
    printf("Opção inválida.\n");
    }

    printf("\n");

    switch (atributo2)
    {
    case 1:printf("Atributos - carta 1: %d , carta 2: %d ",populacao1, populacao2);break;
    case 2:printf("Atributos - carta 1: %d , carta 2: %d ",area1, area2);break;
    case 3:printf("Atributos - carta 1: %f , carta 2: %f ",pib1, pib2);break;
    case 4:printf("Atributos - carta 1: %d , carta 2: %d ",pontos_turisticos1, pontos_turisticos2);break;
    case 5:printf("Atributos - carta 1: %f , carta 2: %f ",densidade_populacional1, densidade_populacional2);break;
    
    default:
    printf("Opção inválida.\n");
    }

    //tranferência de variáveis para valores//
    //terminadas em 1 = carta 1 ,terminadas em 2 = carta 2// 
    float valor1_1, valor1_2, valor2_1, valor2_2;

    switch (atributo1)
    {
    case 1:valor1_1 = populacao1; valor2_1 = populacao2;break;
    case 2: valor1_1 = area1; valor2_1 = area2; break;
    case 3: valor1_1 = pib1; valor2_1 = pib2; break;
    case 4: valor1_1 = pontos_turisticos1; valor2_1 = pontos_turisticos2; break;
    case 5: valor1_1 = densidade_populacional1; valor2_1 = densidade_populacional2; break;
    default:
    printf("Opção inválida.\n");
    printf("\n");
    }
    

    switch (atributo2)
    {
    case 1:valor2_1 = populacao1; valor2_2 = populacao2;break;
    case 2: valor2_1 = area1; valor2_2 = area2; break;
    case 3: valor2_1 = pib1; valor2_2 = pib2; break;
    case 4: valor2_1 = pontos_turisticos1; valor2_2 = pontos_turisticos2; break;
    case 5: valor2_1 = densidade_populacional1; valor2_2 = densidade_populacional2; break;
    default:
    printf("Opção inválida.\n");

    printf("\n");
    }

    //cadastro das variáveis para soma dos atributos//
    float soma1_1, soma1_2, soma2_1, soma2_2;

    if (atributo1 == 1){soma1_1 = populacao1; soma1_2 = populacao2;} 
        else if (atributo1 = 2){soma1_1 = area1; soma1_2 = area2;}
        else if (atributo1 = 3){soma1_1 = pib1; soma1_2 = pib2;}
        else if (atributo1 = 4){soma1_1 = pontos_turisticos1; soma1_2 = pontos_turisticos2;}
        else if (atributo1 = 5){soma1_1 = densidade_populacional1; soma1_2 = densidade_populacional2;}
        else printf("opção inválida");

        if (atributo2 == 1){soma2_1 = populacao1; soma2_2 = populacao2;} 
        else if (atributo2 == 2){soma2_1 = area1; soma2_2 = area2;}
        else if (atributo2 == 3){soma2_1 = pib1; soma2_2 = pib2;}
        else if (atributo2 == 4){soma2_1 = pontos_turisticos1; soma2_2 = pontos_turisticos2;}
        else if (atributo2 == 5){soma2_1 = densidade_populacional1; soma2_2 = densidade_populacional2;}
        else printf("opção inválida");
        printf("\n");

        //cálculo da soma dos atributos da carta 1//

        switch (atributo1)
        {
        case 1:printf("A soma da carta 1 é: %.2f ",soma1_1 + soma2_1);break;
        case 2:printf("A soma da carta 1 é: %.2f ",soma1_1 + soma2_1);break;
        case 3:printf("A soma da carta 1 é: %.2f ",soma1_1 + soma2_1);break;
        case 4:printf("A soma da carta 1 é: %.2f ",soma1_1 + soma2_1);break;
        case 5:printf("A soma da carta 1 é: %.2f ",soma1_1 + soma2_1);break;
        }
        printf("\n");
        
        //cálculo da soma dos atributos da carta 2//

        switch (atributo2)
        {
        case 1:printf("A soma da carta 2 é: %.2f ",soma1_2 + soma2_2);break;
        case 2:printf("A soma da carta 2 é: %.2f ",soma1_2 + soma2_2);break;
        case 3:printf("A soma da carta 2 é: %.2f ",soma1_2 + soma2_2);break;
        case 4:printf("A soma da carta 2 é: %.2f ",soma1_2 + soma2_2);break;
        case 5:printf("A soma da carta 2 é: %.2f ",soma1_2 + soma2_2);break;
        }
        printf("\n");

        //cálculo da carta vencedora// 

        if ((soma1_1 + soma2_1) > (soma1_2 + soma2_2))
        {
            printf("Carta 1 %s venceu! \n\n", local1);
        }else
        {
            printf("Carta 2 %s venceu! \n\n",local2);
        }

        printf("Fim de Jogo!\n");

    return 0;
}