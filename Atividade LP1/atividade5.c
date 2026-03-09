#include <stdio.h>
#include <string.h>

int main() {
    char texto[512];
    int tamanho;
    
    printf("Digite uma frase: ");
    
    fgets(texto, sizeof(texto), stdin);
    
    tamanho = strlen(texto);
    printf("A frase tem %d caracteres.\n", tamanho);
    
    
    return 0;
}