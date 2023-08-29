#include "main.h"

char chifrement (char entree, char perroquet, bool sens)
{
    if (sens)
    {
        return (entree - perroquet)%128;
    }else
    {
        return (entree + perroquet)%128;
    }
    
    
    

}