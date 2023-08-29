#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED

struct Option_gene
{
    char passfrase[10 + 1];
    char perroquet[50 + 1];
    char source[50 + 1];
    char dest[50 + 1];
};


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 


void menu (struct Option_gene);
char chifrement (char, char);
void ouverture (struct Option_gene);
char * lecture_peroquet (struct Option_gene);

#endif