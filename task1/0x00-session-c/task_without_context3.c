#include <stdlib.h>
#include <ctype.h>

int main()
{
    int character;
    printf("enter the character ");
    scanf("%c",&character);
    if (isupper(character))
    {
        printf("%c is uppercase",character);
    }
    else
    {
        printf("%c is lowercase",character);
    }
	return (0);
}


