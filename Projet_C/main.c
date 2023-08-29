#include "main.h"

int main()
{
    struct Option_gene general;
    strcpy(general.dest, "dest.crt");
    strcpy(general.source, "source.txt");
    strcpy(general.perroquet, "peroq.def");
    strcpy(general.passfrase, lecture_peroquet(general));

    bool exit = false;
    int choix;

    while (!exit)
    {
        menu(general);
        scanf("%d",&choix);
        fflush(stdin);
        switch (choix)
        {
        case 1:
            printf("\nChangement du peroquet.\n");
            strcpy(general.passfrase, lecture_peroquet(general));
            
            break;
        
        case 2:
            printf("\nChangement du fichier source.\n");
            printf("Entrez le chemin du fichier source : ");
            scanf("%s",&general.passfrase);
            break;

        case 3:
            printf("\nChangement du fichier destination.\n");
            printf("Entrez le chemin du fichier de destination : ");
            scanf("%s",&general.passfrase);
            break;

        case 4:
            printf("\nChiffrement du message en cour.\n");
            ouverture(general);
            printf("Travail ternminer !\n");
            break;

        case 5:
            printf("\nDecodage du mesage en cours\n");
            decodage(general);
            printf("Travail ternminer !\n");
            break;

        case 6:
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