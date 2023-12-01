#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an int
 * @b: pointer
 * 
 * Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
    unsigned int val = 0;
    int i = 0;

    if (b == NULL)
    {
        return (0);
    }
/**
 * Itère à travers la chaîne binaire 
 * jusqu'à ce qu'un chiffre non binaire soit rencontré.
*/

    while (b[i] == '0' || b[i] == '1')
    {
        if (b[i] == '1')
        {
        // Décale le résultat actuel vers la gauche de 1 bit (multiplication x2)
            val <<= 1;
        // Ajoute le chiffre binaire actuel (converti de caractère en entier) au résultat.
            val += b[i]-'0';
            i++;
        }
    }
    return (val);
}
