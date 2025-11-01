#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char estado1[30] = "Amazonas";
    char carta1[30] = "A01";
    char cidade1[30] = "Manaus";
    float populaçao1 = 2303732;
    float area1 = 11401;
    float pib1 = 103281;
    int pontos_turisticos1 = 35;
    
    char estado2[30] = "Amapá";
    char carta2[30] = "A02";
    char cidade2[30] = "Macapá";
    float populaçao2 = 442933;
    float area2 = 6407;
    float pib2 = 12000;
    int pontos_turisticos2 = 15; 

      
      float densidade1 = populaçao1 / area1;
      float densidade2 = populaçao2 / area2;
      float pib_percapta1 = populaçao1 / pib1;
      float pib_percapta2 = populaçao2 / pib2;
      //to pensando em como estruturar o codigigo... a principio parece simples mas nao sei como estruturar o cogido de forma correta se crio a logica do jogo em si ou das regras do jogo primeiro
      int opçao, atributo;
      //para fazer o menu interativo e a logica do jogo pedi ajuda ao chatgpt entendi como usar o while pra criar um menu "persistente" que nao saia depois de escolhida a opção 
        while (1) {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opçao);

      switch (opçao) {
        case 1:
        printf("\n---cartas---\n");
        printf("carta 1: %s (%s)\n",cidade1, estado1);
        printf("carta 2: %s (%s)\n\n", cidade2, estado2);
        printf("escolha o atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("Escolha: ");
        scanf("%d", &atributo);
        
        switch (atributo){
        case 1:
        printf("\n--Comparando a população--\n");
        printf("%s %.0f habitantes\n", cidade1, populaçao1);
        printf("%s %.0f habitantes\n", cidade2, populaçao2);
        if (populaçao1 > populaçao2)
        printf("%s Venceu!!!\n", cidade1);
        else if (populaçao2 > populaçao1)
        printf("%s Vence!!!\n", cidade2);
        else 
        printf("Empate!!!\n");
        break;
        
      case 2:
          printf("\n--comparando area--\n");
          printf("%s %.2f km²\n",cidade1, area1);
          printf("%s: %.2f km²\n", cidade2, area2);
          if (area1 > area2)
          printf("%s Venceu!!!\n", cidade1);
          else if (area2 > area1)
          printf("%s Venceu!!!\n", cidade2);
          else 
          printf("Empate!!\n");
          break;
        
      case 3:
          printf("\n--Comparando PIB--\n");
          printf("%s: %.2f bilhões\n", cidade1, pib1);
          printf("%s: %.2f bilhões\n", cidade2, pib2);
          if (pib1 > pib2)
          printf("%s Venceu!!!\n", cidade1);
          else if (pib2 > pib1)
          printf("%s Venceu!!!\n", cidade2);
          else 
          printf("Empate!!!");
          break;
      
      case 4:
         printf("\n--Comparando pontos turisticos--\n");
         printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
         printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
         if (pontos_turisticos1 > pontos_turisticos2)
         printf("%s Venceu!!!\n", cidade1);
         else if (pontos_turisticos2 > pontos_turisticos1)
         printf("%s Venceu!!!\n", cidade2);
         else 
         printf("Empate!!!");
         break;

      case 5:
        printf("\n--Comparando Densidade demográfica\n\n");
        printf("%s: %.2f hab/km²\n", cidade1, densidade1);
        printf("%s: %.2f hab/km²\n", cidade2, densidade2);
        if (densidade1 < densidade2)
        printf("%s Venceu!!!\n", cidade1);
        else if (densidade2 < densidade1)
        printf("%s Venceu!!!\n", cidade2);
        else
        printf("Empate!\n");
        break;
        default:
        printf("atributo invalido!\n");
        }
        break;
      

      case 2:
        printf("\n-- Regras do jogo --\n");
        printf("1. Escolha um atributo para comparar entre duas cartas.\n");
        printf("2. O maior valor vence (exceto densidade demográfica, onde o menor vence).\n");
        printf("3. Atributos disponíveis: População, Área, PIB, Pontos turísticos e Densidade.\n");
        break;

      case 3:
        printf("\nSaindo do jogo... Até a próxima!\n");
        exit(0);

        default:
        printf("Opção inválida! Tente novamente.\n");

    }


    return 0;
  }
}


