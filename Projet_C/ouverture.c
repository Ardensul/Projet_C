#include "main.h"


void ouverture (struct Option_gene option)
{
    FILE *source;
    FILE *dest;

    source = fopen(option.source,"r");
    dest = fopen(option.dest, "w+t");

    int longeur_perroquet = strlen(option.passfrase);
    int avancement = 0;
    int pas_perroquet = 0;
    char clef;
    
    char lecture;

    if ( source == NULL || dest == NULL )
    {
        printf("Erreur a l'ouverture des fichier\n");
        fclose(source);
        fclose(dest);
        return;
    }

    fread(&lecture, sizeof(lecture), sizeof(char), source);

    if (feof(source))
    {
        printf("Fichier source vide.\n");
        fclose(source);
        fclose(dest);
        return;
    }

    while (!feof(source))
    {
        pas_perroquet = avancement % longeur_perroquet;
        clef = option.passfrase[pas_perroquet];
        char sortie = chifrement(lecture, clef);
        fwrite(&sortie, sizeof(sortie), sizeof(char), dest);
        avancement ++;

        fread(&lecture, sizeof(lecture), sizeof(char), source);
    }


    fclose(source);
    fclose(dest);  

    source = fopen(option.source,"w");
    fclose(source);
    
}