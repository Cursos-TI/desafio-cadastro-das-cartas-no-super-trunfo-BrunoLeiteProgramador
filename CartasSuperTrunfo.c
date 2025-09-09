#include <stdio.h>
#include <string.h>

// Cartas
struct Carta {
    char estado;
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int populacao;
    float area_em_km2;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (ex: A): ");
    scanf(" %c", &carta1.estado);

    printf("Código da carta (ex: A01): ");
    scanf("%s", carta1.codigo_da_carta);

    printf("Nome da cidade: ");
    scanf("%s", carta1.nome_da_cidade);  // cuidado com nomes compostos

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta1.area_em_km2);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (ex: B): ");
    scanf(" %c", &carta2.estado);

    printf("Código da carta (ex: A02): ");
    scanf("%s", carta2.codigo_da_carta);

    printf("Nome da cidade: ");
    scanf("%s", carta2.nome_da_cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta2.area_em_km2);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibindo as cartas cadastradas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo_da_carta);
    printf("Cidade: %s\n", carta1.nome_da_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area_em_km2);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_da_carta);
    printf("Cidade: %s\n", carta2.nome_da_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area_em_km2);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
