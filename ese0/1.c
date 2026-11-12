/* 
 * Consegna: scrivere un programma che:
 * - Dichiari 6 variabili numeriche (di tipo int); 
 *   2 per contenere i valori inseriti e 4 per contenere
 *   i risultati delle singole operazioni 
 * - Permetta all'utente di inserire i valori tramite scanf()
 * - Esegua le quattro operazioni aritmetiche di base: somma, sottrazione, prodotto, divisione
 * - Stampi a schermo i risultati di ciascuna operazione
 * */


// Includere libreria stdio.h per le funzioni printf() e scanf()
#include <stdio.h> 


// Entry point del programma, funzione main()
int main(void)
{
    // Dichiaro 6 variabili di tipo int
    int a, b, somma, sott, molt, div;

    // Stampo a schermo la richiesta all'utente di inserire
    // i valori di due numeri nel formato "a b"
    printf("\nInserire valori a e b in questo modo \"a b\": ");
    
    // scanf() attende che l'utente prema invio per confermare i
    // valori inseriti e li memorizzo in a e b
    scanf("%d %d", &a, &b);

    // Calcolo la somma e la mostro
    somma = a + b;
    printf("\nSomma: %d", somma);

    // Calcolo la differenza e la mostro
    sott = a - b;
    printf("\nSottrazione: %d", sott);

    // Calcolo il prodotto e lo mostro
    molt = a * b;
    printf("\nMoltiplicazione: %d", molt);

    // Calcolo la divisione e la mostro
    div = a / b;
    printf("\nDivisione: %d", div);

    // puts() immette automaticamente alla fine della stringa
    // un carattere \n, che corrispone ad una nuova riga
    // Equivalente a printf("\n");
    puts("");
    
    // La funzione main restituisce 0
    return 0;
}
