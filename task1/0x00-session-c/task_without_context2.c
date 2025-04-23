#include "_putchar.h"

int main()
{
    char ch;
    int i;
    for(i=0;i<5;i++)
    {
        for(ch='a';ch<='z';ch++)
        {
           _putchar(ch);
        }
        _putchar('\n');
    }
    return 0;
}

