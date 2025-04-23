#include <stdio.h>
#include <ctype.h>

int main()
{
    char s = 'T';

    if(isalpha(s))
    {
        printf("%c is alphabetic character",s);
    }
    else
    {
        printf("%c is not alphabetic character",s);
    }

    return 0;
}

