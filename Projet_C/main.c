#include "main.h"

int main()
{
    struct Option_gene general;

    strcpy(general.dest, "dest.crt");
    strcpy(general.source, "source.txt");

    menu(general);


    return 0;
}