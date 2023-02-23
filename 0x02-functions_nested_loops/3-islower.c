#include "main.h"
/**
 * _islower - shows 1 if the input is a 
 * lowercase character. Another cases shows
 * 0
 * @c: The character to be checked
 * Return 1 for  lowercased character or 0 for anything else
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
