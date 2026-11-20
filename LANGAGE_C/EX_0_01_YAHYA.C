
#include <stdio.h>
#define MAX_STAGIAIRES 40

void saisir(float t[], int n)
{
    int i, resultat;
    for(i=0; i<n; i++)
    {
        do {
            printf("Note %d : ", i+1);
            resultat = scanf("%f", &t[i]);

            if (resultat != 1)
            {
                int caractere;
                while ((caractere = getchar()) != '\n' &&
                       caractere != EOF)
                {
                }
                printf("Entrer une note valide entre 0 et 20.\n");
            }
        } while(resultat != 1 || t[i] < 0 || t[i] > 20);
    }
}

void afficher(float t[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%.2f ", t[i]);
}

float moyenne(float t[], int n)
{
    int i;
    float s=0;

    for(i=0; i<n; i++)
        s += t[i];

    return s/n;
}

float minimum(float t[], int n)
{
    int i;
    float min=t[0];

    for(i=1; i<n; i++)
        if(t[i]<min)
            min=t[i];

    return min;
}

int compter_echecs(float t[], int n)
{
    int i, c=0;

    for(i=0; i<n; i++)
        if(t[i]<10)
            c++;

    return c;
}

int main()
{
    float notes[MAX_STAGIAIRES];
    int n, resultat;

    do {
        printf("Nombre de stagiaires : ");
        resultat = scanf("%d", &n);

        if (resultat != 1)
        {
            int caractere;
            while ((caractere = getchar()) != ' ' &&
                   caractere != EOF)
            {
            }
            printf("Entrer un nombre entre 1 et 40");
        }
    } while(resultat != 1 || n < 1 || n > MAX_STAGIAIRES);

    saisir(notes,n);

    printf("Notes : ");
    afficher(notes,n);

    printf("Moyenne : %.2f", moyenne(notes,n));
    printf("Note minimale : %.2f", minimum(notes,n));
    printf("Nombre des echecs : %d",
           compter_echecs(notes,n));

    return 0;
}
