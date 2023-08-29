#include "main.h"

char chifrement (char entree, char perroquet, bool sens)
{
    if (sens)
    {
        return entree - perroquet;
    }else
    {
        return entree + perroquet;
    }
    
    
    

}