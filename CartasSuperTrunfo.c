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
       float SuperPoder = (populacao + area + PIB + pib + densidade + pontos);
       
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

         printf ("Digite o nome da cidade da 2° Carta:   \n");
       scanf ("%s" ,&nome );

       printf ("Digite o código da 2° carta:   \n");
       scanf ("%s" ,&codigo );

       printf ("Digite o estado da 2° Carta:    \n");
       scanf ("%s" ,&estado );

       printf ("Digite a população da 2° Carta:   \n");
       scanf ("%d" ,&populacao );

       printf ("Digite a área da 2° Carta:     \n");
       scanf ("%f",&area );

       printf ("Digite o PIB da 2° Carta:     \n");
       scanf ("%f" ,&PIB );


       printf ("Digite os pontos turísticos da 2° Carta:   \n");
       scanf ("%d" ,&pontos );

       printf("Primeira Carta: %f\n", SuperPoder);
       printf("Segunda Carta:  %f\n", SuperPoder);
       printf("Densidade Populacional: %f\n", densidade < den )
    



       return 0;








}

