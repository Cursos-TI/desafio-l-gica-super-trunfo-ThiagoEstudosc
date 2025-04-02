#include <stdio.h>

int main(){

    char nome1[25], nome2[25];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, PIB1, PIB2;

    float Den1, Den2, PIBC1, PIBC2;
    double SuperPoder1 , SuperPoder2;

    int opcaodojogador, escolhadoatributo;

    //Menu principal
    printf("***Super Trunfo***\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ler as regras\n");
    printf("3. Sair do jogo\n");
    scanf("%d", &opcaodojogador);
    

    switch (opcaodojogador)
    {
    case 1:
        
    //Entrada para a primeira cidade
    printf("Digite o nome de sua cidade 1: ");
    scanf("%s", nome1);

    printf("Digite o número da sua população 1: ");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos de sua cidade 1: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite o tamanho em km² da sua cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade 1: ");
    scanf("%f", &PIB1);

    Den1 = populacao1 / area1;
    PIBC1 = PIB1 / populacao1;
    SuperPoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + Den1 + PIBC1;

    //Entrada para a segunda cidade
    printf("\nDigite o nome de sua cidade 2: ");
    scanf("%s", nome2);

    printf("Digite o número da sua população 2: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos de sua cidade 2: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite o tamanho em km² da sua cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade 2: ");
    scanf("%f", &PIB2);

    Den2 = populacao2 / area2;
    PIBC2 = PIB2 / populacao2;
    SuperPoder2 = populacao2 + pontosturisticos2 + area2 + PIB2 + Den2 + PIBC2;


    //Saída para a primeira cidade
    printf("\nNome da cidade 1 é: %s\n", nome1);
    printf("Número da sua população 1 é: %d\n", populacao1);
    printf("A quantidade de pontos turísticos 1: %d\n", pontosturisticos1);
    printf("A área de sua cidade 1 é: %fkm²\n", area1);
    printf("O PIB da sua cidade 1 é: %.2f\n", PIB1);
    printf("A densidade populacional é: %.2f\n", Den1);
    printf("O PIB da capital é: %.2f\n", PIBC1);

    //Saída para a segunda cidade
    printf("\nNome da cidade 2 é: %s\n", nome2);
    printf("Número da sua população 2 é: %d\n", populacao2);
    printf("A quantidade de pontos turísticos 2: %d\n", pontosturisticos2);
    printf("A área de sua cidade 2 é: %.2fkm²\n", area2);
    printf("O PIB da sua cidade 2 é: %.2f\n", PIB2);
    printf("A densidade populacional é: %.2f\n", Den2);
    printf("O PIB da capital é: %.2f\n", PIBC2);

    //Escolha para a comparação
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB por capital");
    printf("7. SuperPoder (Todos os atributos de formar resumidas)");
    printf("8. Todos os atributos (Vai mostrar todos os atríbutos)");
    scanf("%d", &escolhadoatributo);

    //Para evitar valores negativos
    if (populacao1 <= 0) {
        printf("Por favor, insira um valor válido para a população.\n");
    }
    if (populacao2 <= 0) {
        printf("Por favor, insira um valor válido para a população.\n");
    }
    if (area1 <= 0) {
        printf("Por favor, insira um valor válido para a área.\n");
    }
    if (area2 <= 0) {
        printf("Por favor, insira um valor válido para a área.\n");
    }

    //Comparação baseado na escolha dos jogadores
    switch (escolhadoatributo)
    {
    case 1:
    if (populacao1 > populacao2) {
        printf("*Resultado da comparação*\n");
        printf("\nPopulação: %s (cidade 1) venceu!\n", nome1);
    } else if (populacao1 < populacao2) {
        printf("\nPopulação: %s (cidade 2) venceu!\n", nome2);
    } else {
        printf("\nPopulação:Empate! Ambas as cidades possuem a mesma população.\n");
    }
        break;
    
    case 2:
    if (pontosturisticos1 > pontosturisticos2) {
        printf("*Resultado da comparação*\n");
        printf("Pontos Turísticos: %s (cidade 1) venceu!\n", nome1);
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf("Pontos Turísticos: %s (cidade 2) venceu!\n", nome2);
    } else {
        printf("Pontos Turísticos:Empate! Ambas as cidades têm a mesma quantidade de pontos turísticos.\n");
    }
        break;
    case 3:
    if (area1 > area2) {
        printf("*Resultado da comparação*\n");
        printf("Área: %s (cidade 1) venceu!\n", nome1);
    } else if (area1 < area2) {
        printf("Área: %s (cidade 2) venceu!\n", nome2);
    } else {
        printf("Área:Empate! Ambas as cidades têm a mesma área.\n");
    }
        break;    
    case 4:
    if (PIB1 > PIB2) {
        printf("*Resultado da comparação*\n");
        printf("PIB: %s (cidade 1) venceu!\n", nome1);
    } else if (PIB1 < PIB2) {
        printf("PIB: %s (cidade 2) venceu!\n", nome2);
    } else {
        printf("PIB:Empate! Ambas as cidades têm o mesmo PIB.\n");
    }
        break;    
    case 5:
    if (Den1 < Den2) {
        printf("*Resultado da comparação*\n");
        printf("Densidade populacional: A cidade 1 (%s) venceu!\n", nome1);
    } else if (Den1 > Den2) {
        printf("Densidade populacional A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("Densidade populacional:Empate! Ambas as cidades têm a mesma dencidade populacional.\n");
    }
        break;
    case 6:
    if (PIBC1 > PIBC2) {
        printf("*Resultado da comparação*\n");
        printf("PIB por capital: A cidade 1 (%s) venceu!\n", nome1);
    } else if (PIBC1 < PIBC2) {
        printf("PIB por capita: A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("PIB por capita:Empate! Ambas as cidades têm o mesmo PIB por capita.\n");
    }
        break;            
    case 7:
    if (SuperPoder1 > SuperPoder2) {
        printf("*Resultado da comparação*\n");
        printf("SuperPoder: A cidade 1 (%s) venceu!\n", nome1);
    } else if (SuperPoder1 < SuperPoder2) {
        printf("SuperPoder: A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("SuperPoder:Empate! Ambas as cidades têm o mesmo superPoder.\n");
    }
    break;
        break;
    case 8:
    if (populacao1 > populacao2) {
        printf("*Resultado da comparação*\n");
        printf("\nPopulação: A cidade 1 (%s) venceu!\n", nome1);
    } else if (populacao1 < populacao2) {
        printf("\nPopulação: A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("\nPopulação:Empate! Ambas as cidades possuem a mesma população.\n");
    }
    
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Pontos Turísticos: A cidade 1 (%s) venceu!\n", nome1);
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf("Pontos Turísticos: A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("Pontos Turísticos:Empate! Ambas as cidades têm a mesma quantidade de pontos turísticos.\n");
    }

    if (area1 > area2) {
        printf("Área: A cidade 1 (%s) venceu!\n", nome1);
    } else if (area1 < area2) {
        printf("Área: A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("Área:Empate! Ambas as cidades têm a mesma área.\n");
    }

    if (PIB1 > PIB2) {
        printf("PIB: A cidade 1 (%s) venceu!\n", nome1);
    } else if (PIB1 < PIB2) {
        printf("PIB: A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("PIB:Empate! Ambas as cidades têm o mesmo PIB.\n");
    }

    if (Den1 < Den2) {
        printf("Densidade populacional: A cidade 1 (%s) venceu!\n", nome1);
    } else if (Den1 > Den2) {
        printf("Densidade populacional A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("Densidade populacional:Empate! Ambas as cidades têm a mesma dencidade populacional.\n");
    }

    if (PIBC1 > PIBC2) {
        printf("PIB por capital: A cidade 1 (%s) venceu!\n", nome1);
    } else if (PIBC1 < PIBC2) {
        printf("PIB por capita: A cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("PIB por capita:Empate! Ambas as cidades têm o mesmo PIB por capita.\n");
    }
        break;

    default:
    printf("Opção inválida. Tente novamente.\n");
        break;
    }
    
    break;
    //Regras
    case 2:
    printf("As regras são:\n");
    printf("1-Os jogadores mantêm suas cartas em um monte, sem olhar para elas. O primeiro jogador escolhe uma carta do topo e decide um atributo para competir.\n");
    printf("2-Os outros jogadores leem o valor do mesmo atributo em suas cartas. Quem tiver o valor mais alto ganha a rodada e coleta as cartas dos outros jogadores, colocando-as embaixo do seu monte.\n");
    printf("3-Se houver empate, todos colocam suas cartas no meio, e uma nova rodada é jogada. Quem ganhar essa rodada leva todas as cartas acumuladas.\n");
    
    printf("\n!!!A regra da dencidade populacional está invertida!!!\n");
    break;

    case 3:
    printf("Saindo do jogo...");
    break;

    default:
    printf("Opção inválida. Tente novamente.\n");
    break;
    }

    return 0;
}