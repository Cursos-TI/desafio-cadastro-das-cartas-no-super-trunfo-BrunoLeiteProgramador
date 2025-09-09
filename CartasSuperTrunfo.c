#include <stdio.h>

int main(){
char Estado;
char codigo_da_carta [50];
char nome_da_cidade [50];
int população;
float area_em_km²;
float pib;
int numeros_de_pontos_turisticos;

// Cadastro da Carta 1
Printf("Carta 1: Brasil \n");
printf("Estado: A \n");
scanf("%c", &Estado);

printf("A01: \n");
scanf("%s", &codigo_da_carta);

printf("Nome da cidade: Brasilia \n");
scanf("%s",&nome_da_cidade);

printf("População: 121000 \n");
scanf("f", &população);

printf("Área: 145.55 KM² \n");
scanf("f", &area_em_km²);

printf("PIB: 444.88 bilhões de reais \n");
scanf("f", &pib);

printf("Números de Pontos Turísticos: 38 \n");
scanf("d", &numeros_de_pontos_turisticos);

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
