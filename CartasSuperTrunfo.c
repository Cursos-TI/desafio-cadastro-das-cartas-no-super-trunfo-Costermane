#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
       
       int pontos;
       int populacao;
       char nome [40];
       char codigo [30];         
       float area;                      
       char estado[20];
       float PIB;
       float densidade = populacao / area;
       float pib = PIB / populacao; // PIB per capita.
       long double SuperPoder = (populacao + area + PIB + pib + densidade + pontos);
       int populacao2;
       float area2;
       float PIB2;                                   // criei variáveis para a comparação das cartas
       float densidade2 = populacao2 / area2;
       float pib2 = PIB / populacao; // PIB per capita.
       int pontos2;
       char nome2 [40];
       char codigo2 [30]; 
       char estado2[20];
       long double SuperPoder2 = (populacao2 + area2 + PIB2 + pib2 + densidade + pontos2);

       

       printf ("Digite o nome da cidade:   \n");
       scanf ("%s" ,&nome );

       printf ("Digite o código da carta:   \n");
       scanf ("%s" ,&codigo );

       printf ("Digite o estado:    \n");
       scanf ("%s" ,&estado );

       printf ("Digite a população:   \n");
       scanf ("%d" ,&populacao );

       printf ("Digite a área:     \n");
       scanf ("%f",&area );

       printf ("Digite o PIB:     \n");
       scanf ("%f" ,&PIB );


       printf ("Digite os pontos turísticos:   \n");
       scanf ("%d" ,&pontos );

       printf ("Nome da cidade: %s\n", nome);
       printf ("Código da carta: %s\n", codigo);
       printf ("Estado: %s\n", estado);
       printf ("População: %d\n", populacao);
       printf ("Área: %f\n", area);
       printf ("PIB: %f\n", PIB);
       printf ("Pontos Turísticos: %d\n", pontos);

       //Nível Aventureiro;

       pib = (PIB / populacao);
       printf("PIB per Capita: %.2f\n", pib); //PIB total dividido pela população. 
       
       densidade = (populacao / area);
       printf("Densidade Populacional: %.2f\n", densidade); // População dividída pela área da cidade.
    
      // return 0;

       //Nível Mestre;

       printf("***Comparação de Cartas***\n");
       
       printf ("Digite o nome da cidade da 1° Carta:   \n");
       scanf ("%s" ,&nome );

       printf ("Digite o código da 1° carta:   \n");
       scanf ("%s" ,&codigo );

       printf ("Digite o estado da 1° Carta:    \n");
       scanf ("%s" ,&estado );

       printf ("Digite a população da 1° Carta:   \n");
       scanf ("%d" ,&populacao );

       printf ("Digite a área da 1° Carta:     \n");
       scanf ("%f",&area );

       printf ("Digite o PIB da 1° Carta:     \n");
       scanf ("%f" ,&PIB );

       printf ("Digite os pontos turísticos da 1° Carta:   \n");
       scanf ("%d" ,&pontos );

       pib = (PIB / populacao);
       printf("PIB per Capita: %.2f\n", pib); //PIB total dividido pela população. 

       densidade = (populacao / area);
       printf("Densidade Populacional: %.2f\n", densidade); // População dividída pela área da cidade.

       printf ("Digite o nome da cidade da 2° Carta:   \n");
       scanf ("%s" ,&nome2 );

       printf ("Digite o código da 2° carta:   \n");
       scanf ("%s" ,&codigo2 );

       printf ("Digite o estado da 2° Carta:    \n");
       scanf ("%s" ,&estado2 );

       printf ("Digite a população da 2° Carta:   \n");
       scanf ("%d" ,&populacao2 );

       printf ("Digite a área da 2° Carta:     \n");
       scanf ("%f",&area2 );

       printf ("Digite o PIB da 2° Carta:     \n");
       scanf ("%f" ,&PIB2 );

       printf ("Digite os pontos turísticos da 2° Carta:   \n");
       scanf ("%d" ,&pontos2 );

       pib = (PIB2 / populacao2);
       printf("PIB per Capita: %.2f\n", pib2); //PIB total dividido pela população. 

       densidade2 = (populacao2 / area2);
       printf("Densidade Populacional: %.2f\n", densidade); // População dividída pela área da cidade.
   
       printf ("Nome da 1° Carta cidade: %s\n", nome);
       printf ("Código da 1° Cartacarta: %s\n", codigo);
       printf ("Estado da 1° Carta: %s\n", estado);
       printf ("População da 1° Carta: %d\n", populacao);
       printf ("Área da 1° Carta: %f\n", area);
       printf ("PIB da 1° Carta: %f\n", PIB);
       printf ("Pontos Turísticos da 1° Carta: %d\n", pontos);

       printf ("Nome da 2° Carta cidade: %s\n", nome2);
       printf ("Código da 2° Carta carta: %s\n", codigo2);         // Inserida todas as saídas de printf, para exibir os dados de cada carta
       printf ("Estado da 2° Carta: %s\n", estado2);
       printf ("População da 2° Carta: %d\n", populacao2);
       printf ("Área da 2° Carta: %f\n", area2);
       printf ("PIB da 2° Carta: %f\n", PIB2);
       printf ("Pontos Turísticos da 2° Carta: %d\n", pontos2);
        
       SuperPoder = (populacao + area + PIB + pib + densidade + pontos); // Soma de todas as variáveis da primeira carta
       SuperPoder2 = (populacao2 + area2 + PIB2 + pib2 + densidade + pontos2); // Soma de todas as variáveis da segunda carta


       printf ("Primeira Carta Vence?: %d\n", (SuperPoder > SuperPoder2, densidade < densidade2)); // Resultado 1, primeira carta vence
                                                                                                   // Resultado 0, Carta 2 vence
       // Na comparação, superpoder, tem que ser maior que o superpoder2.
       // Densidade tem que ser menor.









       return 0;








}

