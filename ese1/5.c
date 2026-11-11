#include <stdio.h>

int main(void)
{
    // Ricevere in ingresso tre interi diversi e calcolare somma, media, prodotto, minore, maggiore
    
    printf("\nInserisci tre valori interi(inserisci 0 0 0 per uscire): ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    printf("\nSomma: %d", a + b + c);
    printf("\nMedia: %d", (a + b + c)/3);
    printf("\nProdotto: %d", a * b * c);
    
    if(a < b)
        if(a < c)
            printf("\nMinore: %d", a);
        else 
            printf("\nMinore: %d", c);
    else if(b < c)
            printf("\nMinore: %d", b);
    else
            printf("\nMinore: %d", c);


    if(a > b)
        if(a > c)
            printf("\nMaggiore: %d", a);
        else 
            printf("\nMaggiore: %d", c);
    else if(b > c)
            printf("\nMaggiore: %d", b);
    else
            printf("\nMaggiore: %d", c);
        


    return 0;
}
