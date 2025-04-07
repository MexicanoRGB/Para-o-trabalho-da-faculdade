#include <stdio.h>

int main() {
    // Declarar uma variável para armazenar a temperatura em Celsius
    float MPH, KPH;
    int escolha;
    printf("Digite uma das opcoes abaixo: \n");
    printf("1- Transformar KPH para MPH;\n");
    printf("2- Transformar MPH para KPH.\n");
    scanf("%d", &escolha);
    
    if (escolha == 1) {
        printf("Digite o valor em KPH: ");
        scanf("%f", &KPH);
        MPH = KPH / 1.60934;
        printf("Valor em KPH: %.2f KPH\n", KPH);
        printf("Valor convertido em MPH: %.2f MPH\n", MPH);
    } else if (escolha == 2) {
        printf("Digite o valor em MPH: ");
        scanf("%f", &MPH);
        KPH = MPH * 1.60934; 
        printf("Valor em MPH: %.2f MPH\n", MPH);
        printf("Valor convertido em KPH: %.2f KPH\n", KPH);
    } else {
        printf("Opção inválida. Programa encerrado.\n");
    }
    return 0;
}
