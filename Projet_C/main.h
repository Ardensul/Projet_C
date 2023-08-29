#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 


#include "menu.c"
#include "chifrement.c"
#include "ouverture.c"



struct Option_gene
{
    char passfrase[10 + 1];
    char source[50 + 1];
    char dest[50 + 1];
};


void menu (struct Option_gene);
char chifrement (char, char);
void ouverture (struct Option_gene);

#endif
