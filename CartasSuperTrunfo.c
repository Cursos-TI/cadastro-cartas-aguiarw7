#include <stdio.h>

int main() {

// Carta 1
char estado1 ; // Escolha uma letra de A a H para representalo

char codigo1 [5] ;

char cidade1 [50] ;

int populacao1 ;

float area1 ;

float pib1 ;

int pontos_turisticos1 ;

float densidade_populacional1 ;

float pib_per_capita1 ;

// Carta 2
char estado2 ; // Escolha uma letra de A a H para representalo

char codigo2 [5] ;

char cidade2 [50] ;

int populacao2 ;

float area2 ;

float pib2 ;

int pontos_turisticos2 ;

float densidade_populacional2 ;

float pib_per_capita2 ;

// Entrada Carta 1
printf("Digite o estado (A a H): ") ;
scanf(" %c" , &estado1) ;

printf("Digite o codigo: ") ;
scanf("%s" , codigo1) ;

printf("Digite a cidade: ") ;
scanf(" %[^\n]" , cidade1) ;

printf("Digite a populacao: ") ;
scanf("%d" , &populacao1) ;

printf("Digite a area: ") ;
scanf("%f" , &area1) ;

printf("Digite o pib: ") ;
scanf("%f" , &pib1) ;

printf("Digite os pontos Turisticos: ") ;
scanf("%d" , &pontos_turisticos1) ;

// Cálculos Carta 1
densidade_populacional1 = populacao1 / area1 ;
pib_per_capita1 = pib1 / populacao1 ;

// Entrada Carta 2
printf("Digite o estado (A a H): ") ;
scanf(" %c" , &estado2) ;

printf("Digite o codigo: ") ;
scanf("%s" , codigo2) ;

printf("Digite a cidade: ") ;
scanf(" %[^\n]" , cidade2) ;

printf("Digite a populacao: ") ;
scanf("%d" , &populacao2) ;

printf("Digite a area: ") ;
scanf("%f" , &area2) ;

printf("Digite o pib: ") ;
scanf("%f" , &pib2) ;

printf("Digite os pontos Turisticos: ") ;
scanf("%d" , &pontos_turisticos2) ;

// Cálculos Carta 2
densidade_populacional2 = populacao2 / area2 ;
pib_per_capita2 = pib2 / populacao2 ;

// Exibição Carta 1
printf("\n--- Carta 1 ---\n");

printf("Estado: %c\n" , estado1) ;

printf("Codigo: %s\n" , codigo1) ;

printf("Cidade: %s\n" , cidade1) ;

printf("Populacao: %d\n" , populacao1) ;

printf("Area: %.2f\n" , area1) ;

printf("PIB: %.2f\n" , pib1) ;

printf("Pontos Turisticos: %d\n" , pontos_turisticos1) ;

printf("Densidade Populacional: %.2f\n" , densidade_populacional1) ;

printf("PIB per capita: %.2f\n" , pib_per_capita1) ;

// Exibição Carta 2
printf("\n--- Carta 2 ---\n");

printf("Estado: %c\n" , estado2) ;

printf("Codigo: %s\n" , codigo2) ;

printf("Cidade: %s\n" , cidade2) ;

printf("Populacao: %d\n" , populacao2) ;

printf("Area: %.2f\n" , area2) ;

printf("PIB: %.2f\n" , pib2) ;

printf("Pontos Turisticos: %d\n" , pontos_turisticos2) ;

printf("Densidade Populacional: %.2f\n" , densidade_populacional2) ;

printf("PIB per capita: %.2f\n" , pib_per_capita2) ;

return 0 ;

}