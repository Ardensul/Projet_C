#include "main.h"

void menu (struct Option_gene option)
{
    printf("Bienvenu dans l'utilitaire de chiffrement perroquet\n");
    printf("Les options de navigations sont les suivante :\n");
    printf("1.Changer le Perroquet actuellement %s\n", option.passfrase);
    printf("2.Change le fichier source actuellement %s\n", option.source);
    printf("3.Change le fichier de destination actuellement %s\n", option.dest);
    printf("4.Chiffrer le message\n");
    printf("5.Decoder le message\n");
    printf("6.Quiter le programe\n");

}