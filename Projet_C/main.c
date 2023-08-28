#include "main.h"

int main()
{
    struct Option_gene general;
    strcpy(general.dest, "dest.crt");
    strcpy(general.source, "source.txt");

    bool exit = false;
    int choix;

    while (!exit)
    {
        menu(general);
        scanf("Quel est votre choix ?  %d",&choix);
        switch (choix)
        {
        case 1:
            printf("\nChangement du peroquet.\n");
            scanf("Entrez le nouveau peroquet : %s",&general.passfrase);
            break;
        
        case 2:
            printf("\nChangement du fichier source.\n");
            scanf("Entrez le chemin du fichier source : %s",&general.passfrase);
            break;

        case 3:
            printf("\nChangement du fichier destination.\n");
            scanf("Entrez le chemin du fichier de destination : %s",&general.passfrase);
            break;

        case 4:
            printf("\nChiffrement du message en cour.\n");
            exit = true;
            break;

        case 5:
            printf("\nAurevoir.\n");
            exit = true;
            break;
        
        default:
            printf("Choix incorrect");
            break;
        }
    }

    return 0;
}