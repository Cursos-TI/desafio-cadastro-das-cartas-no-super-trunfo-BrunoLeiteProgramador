#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
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

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", carta1.codigo_da_carta);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", carta1.nome_da_cidade);

    printf("Digite a populacao (numero inteiro): ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area em km² (numero decimal): ");
    scanf("%f", &carta1.area_em_km2);

    printf("Digite o PIB em bilhoes (numero decimal): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos (numero inteiro): ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", carta2.codigo_da_carta);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", carta2.nome_da_cidade);

    printf("Digite a populacao (numero inteiro): ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area em km² (numero decimal): ");
    scanf("%f", &carta2.area_em_km2);

    printf("Digite o PIB em bilhoes (numero decimal): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos (numero inteiro): ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibindo as cartas cadastradas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo_da_carta);
    printf("Cidade: %s\n", carta1.nome_da_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area_em_km2);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo_da_carta);
    printf("Cidade: %s\n", carta2.nome_da_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area_em_km2);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);

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
