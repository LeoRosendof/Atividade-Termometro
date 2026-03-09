#include <stdio.h>

int main() {
    int n, primo = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    } else {
        for(int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("%d e um numero primo.\n", n);
    else
        printf("%d nao e um numero primo.\n", n);

    return 0;
}