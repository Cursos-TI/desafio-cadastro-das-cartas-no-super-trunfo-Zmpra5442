#include <stdio.h> 
    int main(){
        char estado[30], estado2[30];
        char codigo[10], codigo2[10];
        char ncidade[50], ncidade2[50];
        int popu, popu2;
        int pontos, pontos2;
        float area, area2;
        float de, de2;
        float pib, pib2, pibp, pibp2;

printf("Primeiro defina o Estado da sua carta (Uma letra de A a Z):\n", estado);
scanf("%s", &estado);

printf("Escolha um Código para a sua carta (Ex: A01):\n", codigo);
scanf("%s", &codigo);

printf("Agora, o nome da sua cidade (Ex: RioDeJaneiro):\n", ncidade);
scanf("%s", &ncidade);

printf("Escreva o total de habitantes/população do seu estado (Ex: 6.729.684 habitantes):\n", popu);
scanf("%d", &popu);

printf("Escreva o total de pontos turísticos do seu estado:\n", pontos);
scanf("%d", &pontos);

printf("Escreva o área em (km^2) do seu estado:\n", area);
scanf("%f", &area);

printf("Por último,escreva o PIB (em reais) do seu estado:\n", pib);
scanf("%f", &pib);

printf("Digite a densidade populacional (em hab/km^2) do seu estado:\n", de);
scanf("%f", &de);

printf("Digite o PIB per capita (em reais da sua cidade:\n", pibp);
scanf("%f", &pibp);

printf("Estado: %s\n - Código: %s\n - Cidade: %s\n", estado, codigo, ncidade);
printf("População: %d habitantes\n - Quantidade de pontos turísticos: %d\n - Área: %.2f km^2\n - PIB: %.2f reais\n", popu, pontos, area, pib);
printf("Densidade demográfica: %.2f hab/km^2\n - PIB per capita: %.2f reais\n", de, pibp);

printf("Vamos cadastrar a sua segunda carta\n");

printf("Defina o Estado da sua carta (Uma letra de A a Z):\n", estado2);
scanf("%s", &estado2);

printf("Escolha um Código para a sua carta (Ex: A01):\n", codigo2);
scanf("%s", &codigo2);

printf("Agora, o nome da sua cidade (Ex: RioDeJaneiro):\n", ncidade2);
scanf("%s", &ncidade2);

printf("Escreva o total de habitantes/população do seu estado (Ex: 6.729.684 habitantes):\n", popu2);
scanf("%d", &popu2);

printf("Escreva o total de pontos turísticos do seu estado:\n", pontos2);
scanf("%d", &pontos2);

printf("Escreva o área (em km^2) do seu estado:\n", area2);
scanf("%f", &area2);

printf("Por último,escreva o PIB (em reais) do seu estado:\n", pib2);
scanf("%f", &pib2);

printf("Digite a densidade populacional (em hab/km^2) do seu estado:\n", de);
scanf("%f", &de2);

printf("Digite o PIB per capita (em reais) da sua cidade:\n", pibp);
scanf("%f", &pibp2);

printf("Estado: %s\n - Código: %s\n - Cidade: %s\n", estado2, codigo2, ncidade2);
printf("População: %d habitantes\n - Quantidade de pontos turísticos: %d\n - Área: %.2f km^2\n - PIB: %.2f reais\n", popu2, pontos2, area2, pib2);
printf("Densidade demográfica: %.2f hab/km^2\n - PIB per capita: %.2f reais\n", de2, pibp2);

return 0;
}
