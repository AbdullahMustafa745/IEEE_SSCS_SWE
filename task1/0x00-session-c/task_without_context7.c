#include "_putchar.h"

int main()
{
    int i,j;
    for(i=0;i<=8;i++)
    {
        for(j=1;j<=9;j++)
        {
            if (i<j)
            {
                _putchar(i+'0');
                _putchar(j+'0');
                _putchar(',');
            }

        }
    }

    return 0;
}

