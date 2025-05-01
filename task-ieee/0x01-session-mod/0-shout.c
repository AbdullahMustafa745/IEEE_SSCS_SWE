#include <stdio.h>

fun(int n)
{
    while (n>0)
    {
        printf("hello world\n");
        n--;
    }

}


int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    fun(n);
    return 0;
}

