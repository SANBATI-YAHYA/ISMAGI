#ifndef X_010_COMPTE_H
#define X_010_COMPTE_H

void deposer(double *solde, double montant);
int retirer(double *solde, double montant);
double calculerCapitalFinal(double solde, double taux, double duree);

#endif
