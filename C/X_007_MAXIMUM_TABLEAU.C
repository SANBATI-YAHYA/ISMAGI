/*#include <stdio.h>

int additionner(int a, int b)
{
    return a + b;
}

void compteur(void)
{
    static int nombre = 0;

    nombre++;
    printf("Compteur = %d\n", nombre);
}

int main(void)
{
    int resultat = additionner(4, 6);

    printf("Resultat de additionner(4, 6) = %d\n", resultat);

    compteur();
    compteur();
    compteur();

    return 0;
}


#include <stdio.h>
int main(void)
{
    int note;

    printf("Donner la note : ");
    scanf("%d", &note);

    if (note < 0 || note > 20)
    {
        printf("Erreur : valeur pas valide\n");
    }
    else
    {
        switch (note / 5)
        {
            case 4:
                printf("Tres bien\n");
                break;
            case 3:
                printf("Assez bien\n");
                break;
            case 2:
                printf("Moyen\n");
                break;
            default:
                printf("Insuffisant\n");
                break;
        }
    }

    return 0;
}
*/
/*#include <stdio.h>

int additionner(int a, int b)
{
    return a + b;
}

void compteur(void)
{
    static int nombre = 0;

    nombre++;
    printf("Compteur = %d\n", nombre);
}

int main(void)
{
    int resultat = additionner(4, 6);

    printf("Resultat de additionner(4, 6) = %d\n", resultat);

    compteur();
    compteur();
    compteur();

    return 0;
}





#include <stdio.h>

int main(void)
{
    int note;

    printf("Donner la note : ");
    scanf("%d", &note);

    // Vérification de la validité de la note
    if (note < 0 || note > 20)
    {
        printf("Erreur : valeur pas valide\n");
    }
    else
    {
        // Remplacement du switch par des conditions if / else if
        if (note >= 16)
        
            printf("Tres bien\n");
        
        else if (note >= 14)
        
            printf("Bien\n");
        
        else if (note >= 12)
        
            printf("Assez bien\n");
        
        else if (note >= 10)
        
            printf("Moyen\n");
  \
        else
        {
            printf("Insuffisant\n");
        }
    }

    return 0;
} 



*/




#include <stdio.h>

int main()
{
    int T[100];
    int n, i, max, ;

    printf("Donner le nombre de valeurs : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Donner une valeur : ");
        scanf("%d", &T[i]);
    }

    max = T[0];

    for(i = 0; i < n; i++)
    {
        if(T[i] > max)
            max = T[i];

    }


    printf("Le maximum est : %d", max);

    return 0;
}
