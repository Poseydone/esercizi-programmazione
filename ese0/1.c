#include <stdio.h>

int main(void)
{
    int a, b, somma, sott, molt, div;

    printf("\nInserire valori a e b in questo modo \"a b\": ");
    scanf("%d %d", &a, &b);

    somma = a + b;
    printf("\nSomma: %d", somma);

    sott = a - b;
    printf("\nSottrazione: %d", sott);

    molt = a * b;
    printf("\nMoltiplicazione: %d", molt);

    div = a / b;
    printf("\nDivisione: %d", div);

    puts("");
    
    return 0;
}
