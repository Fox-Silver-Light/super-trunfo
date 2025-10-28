#include <stdio.h>
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


    printf("---Programa de calculo tema2---\n");
    printf("Densidade populacional de %s (%s) é: %.2f hab/km²\n", cidade1, estado1, densidade1);
    printf("Densidade populacional de %s (%s) é: %.2f hab/km²\n", cidade2, estado2, densidade2);
    printf("Pib percapta de %s (%s) é: %.2f\n", cidade1, estado1, pib_percapta1);
    printf("Pib percapta de %s (%s) é: %.2f\n", cidade2, estado2, pib_percapta2);

    
    if (populaçao1 > populaçao2){
    printf ("carta A01 venceu");
  }else {
    printf ("carta A02 venceu");
  }
 





  return 0;




}
