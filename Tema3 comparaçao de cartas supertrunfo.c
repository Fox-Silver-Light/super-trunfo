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
      
    float super_poder1 = populaçao1 + area1 + pib1 + pontos_turisticos1 / densidade1;
    float super_poder2 = populaçao2 + area2 + pib2 + pontos_turisticos2 / densidade2;
    
    float resultado1 = populaçao1 > populaçao2;
    float resultado2 = area1 > area2;
    float resultado3 = pib1 > pib2;
    float resultado4 = pontos_turisticos1 > pontos_turisticos2;
    float resultado5 = super_poder1 > super_poder2;

    printf("---Programa de comparação de cartas super trunfo---\n");
    printf("Populaçao: carta %s venceu (%d)\n", carta1, resultado1);
    printf("Área: carta %s venceu (%d)\n", carta1, resultado2);
    printf("Pib: carta %s venceu (%d)\n", carta1, resultado3);
    printf("Pontos turisticos: carta %s venceu (%d)\n", carta1, resultado4);
    printf("Super poder: carta %s venceu (%d)\n", carta1, resultado5);











    return 0;
}
