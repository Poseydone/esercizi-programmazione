#include <stdio.h>
#include <math.h>


int main(void)
{
    // Controllare se numero è di 5 cifre e dividere nelle cifre che lo compongono

    printf("\nInserire un numero di 5 cifre: ");
    int num;
    scanf("%5d", &num);

    // Per essere palindromo, un numero di 5 cifre deve avere uguali a due a due le coppie
    // (cifra1, cifra5) e (cifra2, cifra4)
    
    
    // Separo le cifre individualmente
    for(int i = 5; i >= 1; i--)
    {
        int temp1 = (num % (int)pow(10, i));
        int temp2 = (num % (int)pow(10, i-1));

        int cifra = (temp1 - temp2) / (int)pow(10, i-1);
    
        printf("%d  ", cifra);
    }

    puts("");

    return 0;
}
