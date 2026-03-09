#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;
    
    printf("Conversao desejada:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("Escolha 1 ou 2: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        printf("Digite temperatura em Celsius: ");
        scanf("%f", &temperatura);
        resultado = (temperatura * 9.0 / 5.0) + 32.0;
        printf("%.2f C equivalem a %.2f F\n", temperatura, resultado);
        
        
    } else if (opcao == 2) {
        printf("Digite temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = (temperatura - 32.0) * 5.0 / 9.0;
        printf("%.2f F equivalem a %.2f C\n", temperatura, resultado);
        
        
    } else {
        
        printf("Opcao invalida! Digite 1 ou 2\n");
    }
    
    return 0;
}