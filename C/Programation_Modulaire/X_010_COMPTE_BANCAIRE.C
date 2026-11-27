#include <stdio.h>
#include "X_010_COMPTE.H"

int main(void)
{
    char nom[100];
    double solde, montant, taux, duree, capitalFinal;
    int choix;

    printf("Nom du titulaire : ");
    if (scanf(" %99[^\n]", nom) != 1)
    {
        printf("Nom invalide.\n");
        return 1;
    }

    printf("Solde initial : ");
    if (scanf("%lf", &solde) != 1 || solde < 0)
    {
        printf("Solde invalide.\n");
        return 1;
    }

    do
    {
        printf("\n--- Menu ---\n");
        printf("1. Depot d'argent\n");
        printf("2. Retrait d'argent\n");
        printf("3. Affichage du solde\n");
        printf("4. Calcul des interets annuels\n");
        printf("5. Quitter\n");
        printf("Votre choix : ");

        if (scanf("%d", &choix) != 1)
        {
            printf("Choix invalide.\n");
            return 1;
        }

        switch (choix)
        {
            case 1:
                printf("Montant du depot : ");
                if (scanf("%lf", &montant) != 1 || montant <= 0)
                {
                    printf("Montant invalide.\n");
                    return 1;
                }
                deposer(&solde, montant);
                printf("Depot effectue. Nouveau solde : %.2f\n", solde);
                break;

            case 2:
                printf("Montant du retrait : ");
                if (scanf("%lf", &montant) != 1 || montant <= 0)
                {
                    printf("Montant invalide.\n");
                    return 1;
                }
                if (!retirer(&solde, montant))
                {
                    printf("Solde insuffisant.\n");
                }
                else
                {
                    printf("Retrait effectue. Nouveau solde : %.2f\n", solde);
                }
                break;

            case 3:
                printf("Titulaire : %s\n", nom);
                printf("Solde actuel : %.2f\n", solde);
                break;

            case 4:
                printf("Taux annuel (en %%): ");
                if (scanf("%lf", &taux) != 1)
                {
                    printf("Saisie invalide.\n");
                    return 1;
                }
                printf("Duree en annees : ");
                if (scanf("%lf", &duree) != 1)
                {
                    printf("Saisie invalide.\n");
                    return 1;
                }
                capitalFinal = calculerCapitalFinal(solde, taux, duree);
                printf("Montant apres %.2f ans : %.2f\n", duree, capitalFinal);
                break;

            case 5:
                printf("Au revoir, %s.\n", nom);
                break;

            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choix != 5);

    return 0;
}
