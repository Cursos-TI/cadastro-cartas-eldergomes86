#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades
char estado[1];
char codigo[3];
char cidade[50];
float populacao;
float area;
float pib;
int pontos;
float dp;
float ppc;

void entradaDados() {
 
  // Área para entrada de dados
  printf("Digite o Estado: \n");
  scanf("%s", &estado);

  printf("Digite o código da carta (Estado + número): \n");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade);

  printf("Digite a população: \n");
  scanf("%f", &populacao);

  printf("Digite a área: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &pontos);

} 

float calculo(){
  
  dp = populacao / area;
  ppc = pib / populacao;

}

int resultado(){

 // Área para exibição dos dados da cidade
  printf("Estado: %s\n", estado);
  printf("Código da carta: %s\n", codigo);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %f\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("Densidade Populacional: %.2f\n", dp);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("PIB Per Capita: %.2f\n", ppc);
  printf("Número de pontos turísticos: %d\n", pontos);

}

int main(){

  entradaDados();
  calculo();
  resultado();
  return 0;

}
