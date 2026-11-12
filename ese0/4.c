/*
 * Scrivere un programma che calcoli i quadrati e i cubi dei 
 * numeri da 0 a 10 senza cicli.
 * Usare tabulazioni per stampare la tabella di valori mostrata nel PDF
 * */  
    
#include <stdio.h>
#include <math.h> // Includere math.h per usare la funzione pow() che calcola la potenza

int main(void)
{
    // Calcolare quadrati e cubi dei numeri da 0 a 10
    // Stampo la tabella
    printf("numero quadrato cubo\n");
    int i = 0; // Dichiaro una variabile intera inizializzata a 0
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;       // Incremento i di 1 dopo ogni printf per calcolare 
               // la potenza del numero successivo
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    i++;
    printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));


    return 0;
}
