#include <stdio.h>
#include <string.h>

int main() {

// Estrutura das Cartas
struct Carta {
    char estado1, estado2;
    char codigo_da_carta1[4],codigo_da_carta2[4];
    char nome_da_cidade1[50],nome_da_cidade2[50];
    int populacao1, populacao2;
    float area_em_km1,area_em_km2;
    float pib1,pib2;
    int pontos_turisticos1,pontos_turisticos2;
};
    struct Carta carta1, carta2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (Escolha uma letra de A a H): \n ");
    scanf(" %c", &carta1.estado1);

    printf("Digite o código da carta ( A Letra que você escolheu mais dois números): \n ");
    scanf("%s", carta1.codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", carta1.nome_da_cidade1);

    printf("Digite a população: \n");
    scanf("%d", &carta1.populacao1);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &carta1.area_em_km1);

    printf("Digite o PIB: \n");
    scanf("%f", &carta1.pib1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &carta1.pontos_turisticos1);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (Escolha uma letra de A a H): \n");
    scanf(" %c", &carta2.estado2);

    printf("Digite o código da carta( A Letra que você escolheu mais dois números): \n");
    scanf("%s", carta2.codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", carta2.nome_da_cidade2);

    printf("Digite a população: \n");
    scanf("%d", &carta2.populacao2);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &carta2.area_em_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &carta2.pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &carta2.pontos_turisticos2);

    // Exibindo as cartas cadastradas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", carta1.estado1);
    printf("Codigo: %s\n", carta1.codigo_da_carta1);
    printf("Cidade: %s\n", carta1.nome_da_cidade1);
    printf("Populacao: %d\n", carta1.populacao1);
    printf("Area: %.2f km²\n", carta1.area_em_km1);
    printf("PIB: %.2f bilhoes\n", carta1.pib1);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", carta2.estado2);
    printf("Codigo: %s\n", carta2.codigo_da_carta2);
    printf("Cidade: %s\n", carta2.nome_da_cidade2);
    printf("Populacao: %d\n", carta2.populacao2);
    printf("Area: %.2f km²\n", carta2.area_em_km2);
    printf("PIB: %.2f bilhoes\n", carta2.pib2);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos2);

    
    return 0;
}
