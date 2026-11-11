#include <stdio.h>

int main(void)
{
    // Disegnare un quadrato di asterischi
    //****
    //****
    //****
    //****

    // Leggi dimensione 
    puts("");

    printf("\nInserire lato quadrato (1 - 20):");
    int lato;
    scanf("%d", &lato);

    puts("");

    for(int i = 0; i < lato; i++)
    {
        for(int j = 0; j < lato; j++)
        {
            printf("* ");
        }
        puts("");
    }

    puts("");

    return 0;
}
