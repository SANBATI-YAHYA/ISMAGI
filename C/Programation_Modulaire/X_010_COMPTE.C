#include <math.h>
#include "X_010_COMPTE.H"

void deposer(double *solde, double montant)
{
    *solde += montant;
}

int retirer(double *solde, double montant)
{
    if (montant > *solde)
    {
        return 0;
    }

    *solde -= montant;
    return 1;
}

double calculerCapitalFinal(double solde, double taux, double duree)
{
    return solde * pow(1 + taux / 100, duree);
}
