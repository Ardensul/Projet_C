#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED

#include <stdio.h>
#include <stdlib.h>

struct Option_gene
{
    char passfrase[10 + 1];
    char source[11 + 1];
    char dest[11 + 1];
};


void menu (struct Option_gene);

#endif
