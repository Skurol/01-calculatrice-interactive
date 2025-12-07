#include <stdio.h>
#include <stdlib.h>

int chOperation;
float nb1, nb2, resultat;
void menu(void); // prototype



void menu(void)
    {

        printf(" === CALCULATRICE === \n");
        printf("1. Addition \n");
        printf("2. Soustraction\n");
        printf("3. Multiplication\n");
        printf("4. Division \n");
        printf("5. Quitter \n");
        printf("Entre le numéro de l'operation de ton choix : ");
        scanf("%d", &chOperation);

        while (chOperation > 5 || chOperation < 1){
            printf("ERREUR : Il faut rentrer le chiffre correspondant a l'operation dont tu as besoin !\n");
            printf("Entre à nouveau le numéro de l'opération de ton choix : ");
            scanf("%d", &chOperation);
        }
    }

int main(int argc, char *argv[])
{
    menu();

    while (chOperation != 5)
        {
            if (chOperation == 1)
            {
                printf("On est donc dans les additions \n");
                printf("Tu vas entrer 2 nombres et ils seront additionnés \n");
                printf("Entre ton premier nombre : ");
                scanf("%f", &nb1);
                printf("Parfait tu peux rentrer ton deuxieme nombre : ");
                scanf("%f", &nb2);
                printf("Impeccable, laisse moi calculer maintenant...\n");
                resultat = nb1 + nb2;
                printf("Le resultat de ton addition est de %.2f\n\n\n", resultat);
                menu();

            }
            else if (chOperation == 2)
            {

                printf("On est donc dans les soustractions \n");
                printf("Tu vas entrer 2 nombres et ils seront soustraits \n");
                printf("Entre ton premier nombre : ");
                scanf("%f", &nb1);
                printf("Parfait tu peux rentrer ton deuxieme nombre : ");
                scanf("%f", &nb2);
                printf("Impeccable, laisse moi calculer maintenant...\n");
                resultat = nb1 - nb2;
                printf("Le resultat de ta soustraction est de %.2f\n\n\n", resultat);
                menu();
            }

            else if (chOperation == 3)
            {
                printf("On est donc dans les multiplications \n");
                printf("Tu vas entrer 2 nombres et ils seront multipliés \n");
                printf("Entre ton premier nombre : ");
                scanf("%f", &nb1);
                printf("Parfait tu peux rentrer ton deuxieme nombre : ");
                scanf("%f", &nb2);
                printf("Impeccable, laisse moi calculer maintenant...\n");
                resultat = nb1 * nb2;
                printf("Le resultat de ta multiplication est de %.2f\n\n\n", resultat);
                menu();
            }

            else if (chOperation == 4)
            {
                printf("On est donc dans les divisions \n");
                printf("Tu va entrer 2 nombres et ils seront divisés \n");
                printf("Entre ton premier nombre : ");
                scanf("%f", &nb1);
                printf("Parfait tu peux rentrer ton deuxieme nombre : ");
                scanf("%f", &nb2);
                while (nb2 == 0)
                {
                    printf("Le deuxième nombre ne peut pas être 0 \n");
                    printf("Entre un nombre à nouveau : ");
                    scanf("%f", &nb2);

                }

                printf("Impeccable, laisse moi calculer maintenant...\n");
                resultat = nb1 / nb2;
                printf("Le resultat de ta division est de %.2f\n\n\n", resultat);
                menu();
            }
        }

    if (chOperation == 5)
    {
        printf("Merci d'avoir utilise Calculatrice \n");
        exit(0);
    }

    return 0;



}
