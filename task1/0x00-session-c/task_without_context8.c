#include "_putchar.h"

int main()
{
    int i,j,k;
    for(i=0;i<=7;i++)
    {
        for(j=1;j<=8;j++)
        {
            for(k=2;k<=9;k++)
            {
                if (i<j && j<k )
                {
                    _putchar(i+'0');
                    _putchar(j+'0');
                    _putchar(k+'0');
                    _putchar(',');
                }
            }

        }
    }

    return 0;
}

