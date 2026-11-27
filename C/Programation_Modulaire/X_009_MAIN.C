#include <stdio.h>
#include "X_009_PERIMETRE.H"

int main(void)
{
    int longueur, largeur;

    printf("Longueur du rectangle : ");
    scanf("%d", &longueur);
    printf("Largeur du rectangle : ");
    scanf("%d", &largeur);
    printf("Perimetre du rectangle : %d\n", perimetreRectangle(longueur, largeur));
    printf("Surface du rectangle : %d\n", surfaceRectangle(longueur, largeur));

    return 0;
}