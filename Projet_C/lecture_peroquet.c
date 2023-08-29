#include "main.h"

char * lecture_peroquet (struct Option_gene option)
{
    FILE *perroquet;
    int nb_char=0;
    char lecture;
    char *peroq = malloc(10 +1);

    perroquet = fopen(option.perroquet,"r");

    if (perroquet == NULL)
    {
        printf("Erreur a l'ouverture des fichier\n");
        fclose(perroquet);
    }

    fread(&lecture, sizeof(lecture), sizeof(char), perroquet);

    if (feof(perroquet))
    {
        printf("Perroquet vide remplisser le fichier svp.\n");
        fclose(perroquet);
    }

    while (!feof(perroquet))
    {
        peroq[nb_char] = lecture;
        nb_char ++;
        fread(&lecture, sizeof(lecture), sizeof(char), perroquet);
    }

    peroq[nb_char] = '\0';

    return peroq;
    
    
    
}