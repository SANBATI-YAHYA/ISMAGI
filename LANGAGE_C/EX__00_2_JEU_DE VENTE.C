#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, proposition, tentatives = 0;

    srand((unsigned int)time(NULL));

    secret = rand() % 50 + 1;

    printf("=== Jeu de devinette (entre 1 et 50) ===\n");

    do {
        printf("  Entrez votre proposition : ");
        if (scanf("%d", &proposition) != 1) {
            printf("Entrée invalide. Veuillez saisir un entier ");
            while (getchar() != '\n'); 
            continue;
        }

        tentatives++;

        if (proposition < secret) {
            printf("Plus grand !");
        } else if (proposition > secret) {
            printf("Plus petit !");
        } else {
            printf("Bravo ! Vous avez trouvé le nombre %d en %d tentative(s)", secret, tentatives);
        }

    } while (proposition != secret);

    return 0;
}