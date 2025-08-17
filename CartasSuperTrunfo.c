#include <stdio.h>
    int main(){
        char estado[30], estado2[30];
        char codigo[10], codigo2[10];
        char nome_cidade[50], nome_cidade2[50];
        unsigned long int populacao = 1000000000;
        unsigned long int populacao2 = 1000000000;
        unsigned long int pib = 1000000000;
        unsigned long int pib2 = 1000000000;
        int pontos_turisticos, pontos_turisticos2;
        float area, area2;
        double pib_per_capita, pib_per_capita2;
        double densidade_populacional, densidade_populacional2;
        double densidade_populacionall, densidade_populacionall2;
        double super_poder, super_poder2;
        
printf("Primeiro defina o Estado da sua carta (Uma letra de A a Z):\n", estado);
scanf("%s", &estado);

printf("Escolha um Código para a sua carta (Ex: A01):\n", codigo);
scanf("%s", &codigo);

printf("Agora, o nome da sua cidade (Ex: RioDeJaneiro):\n", nome_cidade);
scanf("%s", &nome_cidade);

printf("Escreva o total de habitantes/população do seu estado (Ex: 6.729.684 habitantes):\n", populacao);
scanf("%lu", &populacao);

printf("Escreva o total de pontos turísticos do seu estado:\n", pontos_turisticos);
scanf("%d", &pontos_turisticos);

printf("Escreva a área em (km^2) do seu estado:\n", area);
scanf("%f", &area);

printf("Por último,escreva o PIB (em reais) do seu estado:\n", pib);
scanf("%lu", &pib);

densidade_populacional = populacao / area;

pib_per_capita = (double)pib / populacao;

densidade_populacionall = 1 / densidade_populacional;

super_poder = populacao + area + pontos_turisticos + pib + pib_per_capita + densidade_populacionall;

printf("-Estado: %s\n - Código: %s\n - Cidade: %s\n - Quantidade de pontos turísticos: %d\n", estado, codigo, nome_cidade, pontos_turisticos);

printf("- O PIB per capita do seu estado é: %.1f reais\n", pib_per_capita);

printf("- A densidade populacional do seu estado é: %.1f hab/km^2\n", densidade_populacionall);

printf("- O super poder da sua carta é: %.1f\n", super_poder);

printf("Agora vamos definir a sua segunda carta:\n");

printf("Primeiro defina o Estado da sua carta (Uma letra de A a Z):\n", estado2);
scanf("%s", &estado2);

printf("Escolha um Código para a sua carta (Ex: A01):\n", codigo2);
scanf("%s", &codigo2);

printf("Agora, o nome da sua cidade (Ex: RioDeJaneiro):\n", nome_cidade2);
scanf("%s", &nome_cidade2);

printf("Escreva o total de habitantes/população do seu estado (Ex: 6.729.684 habitantes):\n", populacao2);
scanf("%lu", &populacao2);

printf("Escreva o total de pontos turísticos do seu estado:\n", pontos_turisticos2);
scanf("%d", &pontos_turisticos2);

printf("Escreva a área em (km^2) do seu estado:\n", area2);
scanf("%f", &area2);

printf("Por último,escreva o PIB (em reais) do seu estado:\n", pib2);
scanf("%lu", &pib2);

densidade_populacional2 = populacao2 / area2;

pib_per_capita2 = (double)pib2 / populacao2;

densidade_populacionall2 = 1 / densidade_populacional2;

super_poder2 = populacao2 + area2 + pontos_turisticos2 + pib2 + pib_per_capita2 + densidade_populacionall2;

printf("-Estado: %s\n - Código: %s\n - Cidade: %s\n - Quantidade de pontos turísticos: %d\n", estado2, codigo2, nome_cidade2, pontos_turisticos2);

printf("- O PIB per capita do seu estado é: %.1f reais\n", pib_per_capita2);

printf("- A densidade populacional do seu estado é: %.1f hab/km^2\n", densidade_populacionall2);

printf("- O super poder da sua carta é: %.1f\n\n", super_poder2);

printf("Agora o resultado das suas cartas (0 - a carta 1 não venceu | 1 - a carta 1 venceu):\n\n");
printf("- População da carta 1 venceu! %ld\n", populacao > populacao2);
printf("- Área da carta 1 é maior! %.0f\n", area > area2);
printf("- PIB da carta 1 é maior! %ld\n", pib > pib2);
printf("- A carta 1 possui mais pontos turísticos! %d\n", pontos_turisticos > pontos_turisticos2);
printf("- A densidade populacional da carta 1 é maior! %.0f\n", densidade_populacionall < densidade_populacionall2);
printf("- O PIB per capita da carta 1 é maior! %.0f\n", pib_per_capita > pib_per_capita2);
printf("- A carta 1 venceu! %ld\n", super_poder > super_poder2);

return 0;        
}
