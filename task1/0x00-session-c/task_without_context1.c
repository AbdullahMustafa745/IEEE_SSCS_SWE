#include "_putchar.h"
#include <ctype.h>

int main()
{
    char ch,cha ;
    for (ch='a';ch<='z';ch++)
    {
        _putchar(ch);
    }
    for (cha='Z';cha>='A';cha--)
    {
        _putchar(cha);
    }
}
