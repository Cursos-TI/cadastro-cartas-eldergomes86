#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação entre cartas

// Área para definição das variáveis para armazenar as propriedades da cidade 1
char estado1[1];
char codigo1[3];
char cidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontos1;
float dp1;
float ppc1;
float poder1; 

// Área para definição das variáveis para armazenar as propriedades da cidade 2
char estado2[1];
char codigo2[3];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontos2;
float dp2;
float ppc2;
float poder2; 

//Declarar o vencedor
int populacao;
int area;
int pib;
int pontos;
int dp;
int ppc;
int poder;

void entradaCidade1() {
 
  // Área para entrada de dados
  printf("Digite o Estado da cidade 1: \n");
  scanf("%s", &estado1);

  printf("Digite o código da carta (Estado da cidade 1 + número): \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade 1: \n");
  scanf("%s", &cidade1);

  printf("Digite a população da cidade 1: \n");
  scanf("%lu", &populacao1);

  printf("Digite a área da cidade 1: \n");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade 1: \n");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da cidade 1: \n");
  scanf("%d", &pontos1);

} 

void entradaCidade2() {
 
  // Área para entrada de dados
  printf("Digite o Estado da cidade 2: \n");
  scanf("%s", &estado2);

  printf("Digite o código da carta (Estado da cidade 2 + número): \n");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade 2: \n");
  scanf("%s", &cidade2);

  printf("Digite a população da cidade 2: \n");
  scanf("%lu", &populacao2);

  printf("Digite a área da cidade 2: \n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade 2: \n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade 2: \n");
  scanf("%d", &pontos2);

} 


float calculo1(){
  
  dp1 = (float)populacao1 / area1;
  ppc1 = pib1 / populacao1;
  poder1 = populacao1 + area1 + pib1 + (float)pontos1 + ppc1 + (1/dp1);
  populacao1 = (unsigned long int)populacao1;
  pontos1 = (int)pontos1;

}

float calculo2(){
  
  dp2 = (float)populacao2 / area2;
  ppc2 = pib2 / populacao2;
  poder2 = populacao2 + area2 + pib2 + (float)pontos2 + ppc2 + (1/dp2);
  populacao2 = (unsigned long int)populacao2;
  pontos2 = (int)pontos2;

}

int informacao(){

 // Área para exibição dos dados da cidade 1
  printf("--------Dados da cidade 1------------");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %f\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("Densidade Populacional: %.2f\n", dp1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("PIB Per Capita: %.2f\n", ppc1);
  printf("Número de pontos turísticos: %d\n", pontos1);
  printf("Superpoder: %f\n", poder1);

  // Área para exibição dos dados da cidade 2
  printf("--------Dados da cidade 2 -----------");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %f\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("Densidade Populacional: %.2f\n", dp2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("PIB Per Capita: %.2f\n", ppc2);
  printf("Número de pontos turísticos: %d\n", pontos2);
  printf("Superpoder: %f\n", poder2);

}

void comparacao(){
  populacao = populacao1 > populacao2;
  area = area1 > area2;
  pib = pib1 > pib2;
  pontos = pontos1 > pontos2;
  dp = dp1 > dp2;
  ppc = ppc1 > ppc2;
  poder = poder1 > poder2;

}

int resultado(){
  printf("--------RESULTADO PARA A CIDADE 1 (0 PERDEU, 1 VENCEU)----------");
  printf("População: %d\n", populacao);
  printf("Área: %d\n", area);
  printf("PIB: %d\n", pib);
  printf("PIB Per Capita: %d\n", ppc);
  printf("Pontos turísticos: %d\n", pontos);
  printf("Densidade populacional: %d\n", dp);
  printf("Super-poder: %d\n", poder);

}

int main(){

  entradaCidade1();
  entradaCidade2();
  calculo1();
  calculo2();
  informacao();
  comparacao();
  resultado();
  return 0;

}

