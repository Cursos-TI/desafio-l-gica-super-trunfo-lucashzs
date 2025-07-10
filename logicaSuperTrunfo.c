#include <stdio.h>

int main () {

    //Variáveis Primeira Carta
    char estado;
    char codeCarta[255]; 
    char cidade[255];
    int população;
    float area; 
    float pib;
    int numeroPontosTuristicos;
    float densidadePopulacional = população / area;
    float perCapita = pib / população;

    //Variáveis Segunda Carta
    char estado1;
    char codeCarta1[255]; 
    char cidade1[255];
    int população1;
    float area1; 
    float pib1;
    int numeroPontosTuristicos1;
    float densidadePopulacional1 = população1 / area1;
    float perCapita1 = pib1 / população1;

    
    //Início Lógica Primeira Carta
    printf("---- Dados da Primeira Carta ----\n");

    //Solicitando a inserção dos dados da primeira carta e armazenando em variáveis
    printf("Insira uma letra representando o estado: ");
    scanf(" %c", &estado); 

    printf("Insira o codido da carta (Ex: A01): ");
    scanf("%s", codeCarta); 

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);  

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &população); 

    printf("Insira a area da cidade em quilometros quadrados: ");
    scanf("%f", &area); 
    
    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib); 

    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &numeroPontosTuristicos); 

    //Dividindo para obter o resultado do PIB per Capita e da Densidade Populacional
    densidadePopulacional = população / area;
    perCapita = pib / população;


    //Início Lógica Segunda Carta
    printf("\n---- Dados da Segunda Carta ----\n");

    //Solicitando a inserção dos dados da segunda carta e armazenando em variáveis
    printf("Insira uma letra representando o estado: ");
    scanf(" %c", &estado1); 

    printf("Insira o codido da carta (Ex: A01): ");
    scanf("%s", codeCarta1); 

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1);  

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &população1); 

    printf("Insira a area da cidade em quilometros quadrados: ");
    scanf("%f", &area1); 
    
    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1); 

    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &numeroPontosTuristicos1); 

    //Dividindo para obter o resultado do PIB per Capita e da Densidade Populacional
    densidadePopulacional1 = população1 / area1;
    perCapita1 = pib1 / população1;


    //Comparando as duas cartas e alocando uma delas como vencedora
    printf ("\n--- Resultado Carta Vencedora ---\n");
    printf("Atributo de Comparação: Área \n");
    printf("Carta 1: %s | Área: %f\n", cidade, area);
    printf("Carta 2: %s | Área: %f\n", cidade1, area1);

    if (area > area1){
        printf("\n--- A carta 1 Venceu!!! ---\n");
    } else {
        printf("\n--- A carta 2 Venceu!!! ---\n");
    }
    
    
    //Exibindo o resultado da primeira carta
    printf("\n---- Resultado da Primeira Carta ----\n");
    printf ("Estado: %c\n", estado);
    printf ("Código: %s\n", codeCarta);
    printf ("Nome da Cidade: %s\n", cidade);
    printf ("Populção: %d\n", população);
    printf ("Área: %f\n", area);
    printf ("PIB: %f\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);
    printf ("Densidade Populacional: %f\n", densidadePopulacional);
    printf ("PIB per Capita: %f\n", perCapita);

    //Exibindo o resultado da segunda carta
    printf("\n---- Resultado da Segunda Carta ----\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codeCarta1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("Populção: %d\n", população1);
    printf ("Área: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf ("Densidade Populacional: %f\n", densidadePopulacional1);
    printf ("PIB per Capita: %f\n", perCapita1);

    return 0;
}