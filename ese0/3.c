#include <stdio.h>

int main(void)
{
    float diametro, circonferenza, area;
    int raggio = 2;
    float pi = 3.14159f;
    // diametro = 2 * r 
    // circonferenza = 2 * pi * r
    // area = pi * r / 2

    printf("\nRaggio = %d, Pi = %f", raggio, pi);
    printf("\nDiametro = %f", 2 * (float)raggio);
    printf("\nCirconferenza = %f", 2 * pi * raggio);
    printf("\nArea = %f", pi * raggio * raggio);

    puts("");


    return 0;
}
