#include "_putchar.h"

void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

int main()
{
    int i,j,k,num;
    printf("enter the wanted number ");
    scanf("%d",&num);
    if (num > 15 || num <0)
    {
        printf("enter a number from 0 to 15");
    }
    else
    {
            for (i=0;i<=num;i++)
            {

                for (j=0;j<=num;j++)
                {
                    k=i*j;
                    print_number(k);
                    _putchar(' ');
                }
            _putchar('\n');
            }

    }
        return (0);
}


