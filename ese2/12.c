#include <stdio.h>

int main(void)
{
    // Disegnare un quadrato di asterischi vuoto
    //****
    //*  *
    //*  *
    //****

    int lato;

    puts("");
    
    // Leggi dimensione 
    do
    {
        printf("\nInserire lato quadrato (1 - 20): ");
        scanf("%d", &lato);

        if(lato > 20 || lato < 1)
        {
            printf("\nValore fuori dai limiti consentiti (1 - 20)");
        }
    }
    while(lato > 20 || lato < 1);

    puts("");

    for(int i = 0; i < lato; i++)
    {
        for(int j = 0; j < lato; j++)
        {
            if(i == 0 || i == lato - 1)
            {
                printf("*");
            }
            else if(j == 0 || j == lato - 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        puts("");
    }

    puts("");

    return 0;

    return 0;
}
