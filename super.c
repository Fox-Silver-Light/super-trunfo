#include <stdio.h>

  int main(){
    char estado1[30] = "Amazonas";
    char carta1[30] = "A01";
    char cidade1[30] = "Manaus";
    int populaçao1 = 2303732;
    float area1 = 11401;
    float pib1 = 103281;
    int pontos_turisticos1 = 35; 
    //aqui pedi ajuda ao chat gpt pra declarar a ultima variavel pra saber se podia usar espaços ao declarar a variavel e não é possivel, por enquanto nada dificil vou escrever a segunda carta.
    
    char estado2[30] = "Amapá";
    char carta2[30] = "A02";
    char cidade2[30] = "Macapá";
    int populaçao2 = 442933;
    float area2 = 6407;
    float pib2 = 12;
    int pontos_turisticos2 = 15;
    //beleza segunda carta escrita agora vou declarar o printf para as cartas e vou tentar introduzir um scanf para ler a carta, exemplo vou escrever A02 e ela mostrara a carta 2
    
    printf("Estado: %s\n", estado1);
    printf("Carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populaçao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f Bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("Estado: %s\n", estado2);
    printf("Carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populaçao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f Bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    //beleza printf's feitos, agora vou tentar introdduzir os scanf, aqui vou pedir ao chatgpt pra me auxiliar de novo por que preciso que o scanf apareça antes dos printf pra dar certo e selecinar a carta 
    // ok referencia pedida pelo que eu entedi é mais simples do que parece, preciso apenas delimitar e posso escrever apenas 1 scanf (o chatgpt me deu coisas como if e else mas nao sei usar ainda) 
    // ok tentei mas nao consegui acho que precisa do if e else pra comparar o que eu escrevi então nao vou fazer 

  return 0;

}
