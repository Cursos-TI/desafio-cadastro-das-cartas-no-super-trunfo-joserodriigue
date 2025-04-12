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
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1, carta2;

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

    // Exibição dos dados da primeira carta
    printf("Dados da Primeira Carta:\n");
    printf("-----------------------\n");
    printf("estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f milhões $\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
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
    printf("\n");

    return 0;
}
