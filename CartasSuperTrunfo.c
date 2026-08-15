#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[1];
  char codigo[3];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontos;

  // Área para entrada de dados
  printf("Digite o Estado: \n");
  scanf("%1s", &estado);

  printf("Digite o código da carta (Estado + número): \n");
  scanf("%2s", &codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%49s", &cidade);

  printf("Digite a população: \n");
  scanf("%d", &populacao);

  printf("Digite a área: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &pontos);

  // Área para exibição dos dados da cidade
  printf("Estado: %s\n", estado);
  printf("Código da carta: %s\n", codigo);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de pontos turísticos: %d\n", pontos);

return 0;
} 
