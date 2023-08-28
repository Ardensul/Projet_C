#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 


#include "menu.c"
#include "chifrement.c"



struct Option_gene
{
    char passfrase[10 + 1];
    char source[50 + 1];
    char dest[50 + 1];
};


void menu (struct Option_gene);

#endif
