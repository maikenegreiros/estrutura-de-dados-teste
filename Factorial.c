#include <stdio.h>

long double calculateFactorial(int numberInput) {
    long double result = numberInput;
    while (numberInput > 1) {
        result *= (--numberInput);
    }
    return result;
}

int main(void) {
    int numberInput;

    printf("Digite um número para o cálculo fatorial: ");
    scanf("%i", &numberInput);

    printf("Fatorial de %i é %.0Lf", numberInput, calculateFactorial(numberInput));
    return 0;
}