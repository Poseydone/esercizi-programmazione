#include <stdio.h>

int main(void)
{
    int studenti = 10;
    int somma = 0;
    int max = -1;
    int min = 101;
    int promossi = 0;

    // voto min 0, voto max 100
    for(int i = 0; i < studenti; i++)
    {
        int voto;
        printf("\nInserire voto studente %d: ", i+1);
        scanf("%d%*c", &voto);
        if(voto > 100 || voto < 0)
        {
            printf("\nLimiti voto 0 - 100");
            i--;
            continue;
        }

        somma += voto;
        if(voto > max)
            max = voto;
        if(voto < min)
            min = voto;
        
        if(voto >= 50)
            promossi += 1;
    }

    printf("\nMedia voti: %.2f", ((float)somma / (float)studenti));
    printf("\nVoto massimo: %d", max);
    printf("\nVoto minimo: %d", min);
    printf("\nStudenti promossi: %d", promossi);

    puts("");

    return 0;
}
