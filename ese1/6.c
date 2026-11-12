/*
 * Scrivere un programma che laegga un intero e determini e stampi
 * se sia pari o dispari
 * Usare l'operatore di resto (o divisione intera) "%"
 * */


#include <stdio.h>

int main(void)
{
    // Chiedo all'utente un numero intero e lo memorizzo in una variabile int
    int n;
    printf("\nInserire numero intero: ");
    scanf("%d", &n);

    // Se il numero nella divisione intera per 2 da resto 0 allora è pari
    if((n % 2) == 0)
        printf("\nPari");
    else // Altrimenti è dispari
        printf("\nDispari");

    puts("");

    return 0;
}
