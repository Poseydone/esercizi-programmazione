/*
 * Scrivere un programma che riceva in ingresso tre interi
 * diversi dalla stastiera e stampi la somma, la media, il prodotto,
 * il minore e il maggiore.
 *
 * */

#include <stdio.h>

int main(void)
{
    // Dichiaro tre variabili intere che conterranno i valori inseriti
    // dall'utente
    int a, b, c;

    // Chiedere all'utente di inserire tre valori interi 
    // e memorizzarli nelle tre variabili
    printf("\nInserisci tre valori interi: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Stampare la somma, la media e il prodotto
    // calcolati all'interno di printf()
    printf("\nSomma: %d", a + b + c);
    printf("\nMedia: %d", (a + b + c)/3);
    printf("\nProdotto: %d", a * b * c);
    
    // Ricerca del minore
    if(a < b)
        if(a < c)
            printf("\nMinore: %d", a);
        else 
            printf("\nMinore: %d", c);
    else if(b < c)
            printf("\nMinore: %d", b);
    else
            printf("\nMinore: %d", c);

    // Ricerca del maggiore
    if(a > b)
        if(a > c)
            printf("\nMaggiore: %d", a);
        else 
            printf("\nMaggiore: %d", c);
    else if(b > c)
            printf("\nMaggiore: %d", b);
    else
            printf("\nMaggiore: %d", c);
        
    // La ricerca del minore e del maggiore possono essere unite in una 
    // singola struttura if, ma le ho separate per maggiore chiarezza
    return 0;
}
