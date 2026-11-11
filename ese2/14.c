#include <stdio.h>
#include <math.h>

int main(void)
{
    // Controlla se un numero di 5 cifre è palindromo

    printf("\nInserire un numero di 5 cifre: ");
    int num;
    scanf("%5d", &num);

    // Per essere palindromo, un numero di 5 cifre deve avere uguali a due a due le coppie
    // (cifra1, cifra5) e (cifra2, cifra4)

    int c1, c2, c4, c5;
    
    
    // Separo le cifre individualmente
    for(int i = 1; i <= 5; i++)
    {
        int temp1 = (num % (int)pow(10, i));
        int temp2 = (num % (int)pow(10, i-1));

        int cifra = (temp1 - temp2) / (int)pow(10, i-1);
        
        if(i == 1)
            c1 = cifra;
        if(i == 2) 
            c2 = cifra;
        if(i == 4) 
            c4 = cifra;
        if(i == 5) 
            c5 = cifra;
    }


    //Controllare palindromia
    if(c1 == c5 && c2 == c4)
        printf("\nIl numero %d è palindromo", num);
    else
        printf("\nIl numero %d non è palindromo", num);

    puts("");
    return 0;
}
