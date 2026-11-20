/*#if !defined(ARCH_ARM) && !defined(ARCH_X86)
    #error "aucan archetect"
#elif defined(ARCH_ARM)&& defined(ARCH_X86)
    #error "deux archetect defind"
#endif

#if defined(ARCH_ARM)
    #define FREQ_MHZ 168
#else 
    #define FREQ_MHZ 3200
#endif
#define FREQ_HZ (FREQ_MHZ*1000000) 




#include <stdio.h>
#if !defined(ARCH_ARM) && !defined(ARCH_X86)
    #error "aucune architecture"
#elif defined(ARCH_ARM) && defined(ARCH_X86)
    #error "deux architectures definies"
#endif

#if defined(ARCH_ARM)
    #define FREQ_MHZ 168
#else
    #define FREQ_MHZ 3200
#endif

#define FREQ_HZ (FREQ_MHZ * 1000000UL)



int main(void)
{
    printf("Frequency: %lu Hz", FREQ_HZ);
    return 0;
}
*/


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
