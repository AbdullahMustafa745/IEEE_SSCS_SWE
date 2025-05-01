#include <stdio.h>

int sum_layers(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum_layers(n-1);
    }

}


int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    sum_layers(n);
    printf("%d",sum_layers(n));
    return 0;
}

