#include <stdio.h> 
    int main(){
        char estado[30], estado2[30];
        char codigo[10], codigo2[10];
        char ncidade[50], ncidade2[50];
        int popu, popu2;
        int pontos, pontos2;
        float area, area2;
        float pib, pib2;

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

printf("Escreva o área em km^2 do seu estado:\n", area);
scanf("%f", &area);

printf("Por último,escreva o PIB em reais do seu estado:\n", pib);
scanf("%f", &pib);

printf("Estado: %s\n - Código: %s\n - Cidade: %s\n", estado, codigo, ncidade);
printf("População: %d\n - Quantidade de pontos turísticos: %d\n - Área: %f\n - PIB: %f\n", popu, pontos, area, pib);

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

printf("Escreva o área em km^2 do seu estado:\n", area2);
scanf("%f", &area2);

printf("Por último,escreva o PIB em reais do seu estado:\n", pib2);
scanf("%f", &pib2);

printf("Estado: %s\n - Código: %s\n - Cidade: %s\n", estado2, codigo2, ncidade2);
printf("População: %d\n - Quantidade de pontos turísticos: %d\n - Área: %f\n - PIB: %f\n", popu2, pontos2, area2, pib2);

return 0;
}