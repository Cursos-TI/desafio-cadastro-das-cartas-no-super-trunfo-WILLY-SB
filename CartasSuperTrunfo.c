#include <stdio.h>
trabalho xadrez.c
// Definição da estrutura Carta
typedef struct {
    char estado;                               // Letra de A a H
    char codigoCarta[10];           // Código da carta (ex: A01, B03)
    char nomeCidade[50];        // Nome da cidade (max 50 characters)
    int populacao;                  // Número de habitantes
    float area;                     // Área em km²
    float pib;                      // Produto Interno Bruto
} Carta;


void lerCarta(Carta  *carta) {

    printf("Informe o estado (letra de A a B): ");
    scanf(" %c", &carta->estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", carta->codigoCarta);

    printf("Informe o nome da cidade: ");
    scanf("%49s", carta->nomeCidade); // Read up to 49 characters to avoid overflow


    printf("Informe a população da cidade: ");
    scanf("%d", &carta->populacao);

    printf("Informe a área da cidade (km²): ");
    scanf("%f", &carta->area);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &carta->pib);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta) {
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigoCarta);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);


   return 0;
    
}

