#include <stdio.h>

void echo(int n)
{
    if (n<0)
    {
        return;
    }
    else
    {
        printf("%d:echo \n",n);
    }
    return echo(n-1);
}


int main()
{
    echo(3);
    return 0;
}

