#include <stdio.h>
int main(){
  int numeroCarta =1 ou 2;
  char estado  Estado representado por uma letra S ou B;
  char codigoCarta[10] Código da carta ( A01 ou B02);
    char nomeCidade[50]  Nome da cidade Aracaju ou Bahia;
    float populacao Numero de habitante(10.000);
    float area Área em km² (1000.00);
    float pib  Pela população ;

     printf("Informe o número da carta (1 ou 2);");
     escanf("%d", &numeroCarta);
    if (numeroCarta != 1 && numeroCarta != 2) {
        printf("Número da carta inválido. Deve ser 1 ou 2.\n");
        return 1; // Encerra o programa se o número da carta for inválido
   
    printf("Informe o estado (letra de A a B): ");
    scanf(" %c", &estado,"A" );

    printf("Informe o código da carta ( A01): ");
    scanf("%s", "&codigoCarta","A01");

    printf("Informe o nome da cidade: ");
    scanf("%49s","&nomeCidade","Aracaju"); // Read up to 49 characters to avoid overflow

    printf("Informe a população da cidade: ");
    scanf("%d"," &populacao","240.000");

    printf("Informe a área da cidade (km²): ");
    scanf("%f", "&area","1000,00");

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", "&pib",'%f"');

       printf("Numero da carta: %d\n", numeroCarta,"1");
    printf("Estado: %c\n", estado,"A");
printf("codigo da carta: %s\n", "codigoCarta","A01");
 printf("Nome da cidade: %s\n"," nomeCidade","Aracaju");
    printf("população: %d\n", "população","&populaçao","2400.000");
    printf("Área: %.2f RM²\n", "area","1000.00");
    printf("PIB: %.2f bilhoes\n"," pib","1000.00");
    printf("Dados da carta:\n");
  

   return 0;
    
}

