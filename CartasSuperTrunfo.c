#include <stdio.h>

#include <string.h>

// Definição da estrutura para representar uma carta (cidade)
struct Carta {
    char estado[8]; //ex: A ate o H
    char codigo[4]; // Ex: A01
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;

};

int main() {
    // Declaração de duas cartas
    struct Carta carta1, carta2;
    int resultado_comparacao;

    // Cadastro da primeira carta
    printf("Cadastro da Primeira Carta:\n");
    printf("-------------------------\n");
    printf("estado:  ");
    scanf("%s", carta1.estado);
    printf("Código da cidade (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em milhões de $): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    printf("\n");

    carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = (float)1.0 / carta1.densidade_populacional +
                          carta1.populacao +
                          carta1.area +
                          carta1.pib +
                          carta1.pontos_turisticos +
                          carta1.pib_per_capita;
    printf("\n");
    
    // Cadastro da segunda carta
    printf("Cadastro da Segunda Carta:\n");
    printf("------------------------\n");
     printf("estado:  ");
    scanf("%s", carta2.estado);
    printf("Código da cidade (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em milhões de $): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    printf("\n");

    carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
     carta2.super_poder = (float)1.0 / carta2.densidade_populacional +
                          carta2.populacao +
                          carta2.area +
                          carta2.pib +
                          carta2.pontos_turisticos +
                          carta2.pib_per_capita;
    printf("\n");


    // Exibição dos dados da primeira carta
    printf("Dados da Primeira Carta:\n");
    printf("-----------------------\n");
    printf("estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f milhões $\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Super Poder: %.2f\n", carta1.super_poder);
    printf("\n");

    // Exibição dos dados da segunda carta
    printf("Dados da Segunda Carta:\n");
    printf("----------------------\n");
    printf("estado: %s \n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f milhões $\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Super Poder: %.2f\n", carta2.super_poder);
    printf("\n");

    printf("Resultado da Comparação:\n");
    printf("------------------------\n");

      // Comparação da População
    printf("População: Carta 1 ");
    if (carta1.populacao > carta2.populacao) {
        printf("vence (1)\n");
    } else {
        printf("vence (0)\n");
    }

        // Comparação da Área
    printf("Área: Carta 1 ");
    if (carta1.area > carta2.area) {
        printf("vence (1)\n");
    } else {
        printf("vence (0)\n");
    }

     // Comparação do PIB
    printf("PIB: Carta 1 ");
    if (carta1.pib > carta2.pib) {
        printf("vence (1)\n");
    } else {
        printf("vence (0)\n");
    }

     // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 ");
    if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
        printf("vence (1)\n");
    } else {
        printf("vence (0)\n");
    }

     // Comparação da Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta 1 ");
    if (carta1.densidade_populacional < carta2.densidade_populacional) {
        printf("vence (1)\n");
    } else {
        printf("vence (0)\n");
    }

        // Comparação do PIB per Capita
    printf("PIB per Capita: Carta 1 ");
    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("vence (1)\n");
    } else {
        printf("vence (0)\n");
    }

    // Comparação do Super Poder
    printf("Super Poder: Carta 1 ");
    if (carta1.super_poder > carta2.super_poder) {
        printf("vence (1)\n");
    } else {
        printf("vence (0)\n");
    }


    return 0;
}
