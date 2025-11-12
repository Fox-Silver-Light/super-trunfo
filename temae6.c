#include <stdio.h>
#include <stdlib.h>

int main() {
    // Carta 1
    char estado1[30] = "Amazonas";
    char carta1[30] = "A01";
    char cidade1[30] = "Manaus";
    float populacao1 = 2303732;
    float area1 = 11401;
    float pib1 = 103281;
    int pontos_turisticos1 = 35;

    // Carta 2
    char estado2[30] = "Amapá";
    char carta2[30] = "A02";
    char cidade2[30] = "Macapá";
    float populacao2 = 442933;
    float area2 = 6407;
    float pib2 = 12000;
    int pontos_turisticos2 = 15;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;
    int atributo1, atributo2;
      // aqui usarei a estrutura de repetição while para criar um menu persistente acho que esse é o basico vai funcionar, eu espero kkkkk, a condição vista no video é falsa e agora precisa ser verdadeira deixa eu ver se entendi isso.
    while (1) {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n --- Cartas ---");
                printf("Carta 1: %s (%s)\n", cidade1, estado1);
                printf("Carta 2: %s (%s)\n", cidade2, estado2);
                //primeiro atrituto para selecionar 
                printf("Escolha o PRIMEIRO atributo para comparar:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos turísticos\n");
                printf("5. Densidade demográfica\n");
                printf("Escolha: ");
                scanf("%d", &atributo1);
                //agora acontecera a validação da primeira escolha ok ela será 
                if (atributo1 < 1 || atributo1 > 5){
                printf("atributo invalido\n");
                break;
                }
                //aqui tentarei criar com um atributo for (ja estou nas peças de xadrez acabei de aprender sobre as estruturas de repetição só estou refazendo esse codigo pra ficar melhor e pra tentar fixar o aque aprendi).
                printf("Escolha o segundo atributo:\n");
                for (int i = 1; i <= 5; i++)
                {
                  if (i == atributo1) continue;
                  switch (i)
                  {
                    case 1: printf("1. população\n"); break;
                    case 2: printf("2. Área\n"); break;
                    case 3: printf("3. PIB\n"); break;
                    case 4: printf("4. Pontos Turísticos\n"); break;
                    case 5: printf("5. Densidade demográfica\n"); break;
                  }
                }
                  printf("Escolha: \n");
                  scanf("%d", &atributo2);
                if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) 
                {
                  printf("atributo ou escolha invalida\n");
                  break;
                }
                  // agora preciso criar mais variaveis para fazer a comparação.
                float valor1_carta1 = 0, valor1_carta2 = 0;
                float valor2_carta1 = 0, valor2_carta2 = 0;

                // agora os valores do primeiro atributo.
                switch (atributo1) 
                {
                  case 1: valor1_carta1 = populacao1;
                          valor1_carta2 = populacao2; 
                  break;
                  case 2: valor1_carta1 = area1;
                          valor1_carta2 = area2; 
                  break;
                  case 3: valor1_carta1 = pib1; 
                          valor1_carta2 = pib2; 
                  break;
                  case 4: valor1_carta1 = pontos_turisticos1;
                          valor1_carta2 = pontos_turisticos2; 
                  break;
                  case 5: valor1_carta1 = densidade1;
                          valor1_carta2 = densidade2; 
                  break;
                }
                switch (atributo2)
                {
                  case 1: valor2_carta2 = populacao1;
                          valor2_carta2 = populacao2; 
                  break;
                  case 2: valor2_carta2 = area1;
                          valor2_carta2 = area2; 
                  break;
                  case 3: valor2_carta2 = pib1;
                          valor2_carta2 = pib2; 
                  break;
                  case 4: valor2_carta2 = pontos_turisticos1;
                          valor2_carta2 = pontos_turisticos2; 
                  break;
                  case 5: valor2_carta2 = densidade1;
                          valor2_carta2 = densidade2; 
                  break;
                }
                // agora a introdução de mais duas variaveis para aplicação de pontos das cartas 
                float pontos1 = 0, pontos2 = 0;
                
                if (atributo1 == 5) 
                {
                if (valor1_carta1 < valor1_carta2) pontos1++;
                else if (valor1_carta2 < valor1_carta1) pontos2++;
                }else 
                {
                  if (valor1_carta1 > valor1_carta2) pontos1++;
                else if (valor1_carta2 > valor1_carta1) pontos2++;
                }
                
                if (atributo2 == 5) 
                {
                if (valor2_carta1 < valor2_carta2) pontos1++;
                else if (valor2_carta2 < valor2_carta1) pontos2++;
                }else 
                {
                  if (valor2_carta1 > valor2_carta2) pontos1++;
                else if (valor2_carta2 > valor2_carta1) pontos2++;
                }
                
                // agora a soma dos atributos 
                
                float soma1 =  valor1_carta1 + valor2_carta1;
                float soma2 = valor1_carta2 + valor2_carta2;
                
                printf("--- Rescultado ---\n");
                printf("Carta 1: %s (%s)\n", cidade1, estado1);
                printf("Carta 2: %s (%s)\n", cidade2, estado2);
                printf("Atributos escolhidos: \n");
                printf("1º. %d\n 2º. %d\n", atributo1, atributo2);
               
                printf("Resultados: \n");
                printf("%s -- %.2f | %.2f (soma dos atributos = %.2f)",cidade1, valor1_carta1, valor2_carta1, soma1 );
                printf("%s -- %.2f | %.2f (soma dos atributos = %.2f)",cidade2, valor1_carta2, valor2_carta2, soma2 );

                if (soma1 > soma2)
                    printf("Parabens %s VENCEU!\n", cidade1);
                else if (soma2 > soma1)
                    printf("Parabens %s VENCEU!\n", cidade2);
                else
                    printf(">>> EMPATE!\n");

                break;
              

              case 2:
                printf("\n=== REGRAS ===\n");
                printf("1. Escolha dois atributos numéricos diferentes.\n");
                printf("2. O maior valor vence (exceto densidade, onde o menor vence).\n");
                printf("3. Após comparar, os valores são somados.\n");
                printf("4. A carta com a maior soma vence.\n");
                printf("5. Se as somas forem iguais, é empate.\n");
                break;

            case 3:
                printf("\nSaindo do jogo... Até a próxima!\n");
                exit(0);

            default:
                printf("Opção inválida!\n");
        }
    }
  return 0;
}


  
