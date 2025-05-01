#include <stdio.h>

sum(long long num)
{
    int result;
    result=num%10;
    num=num/10;
    if (num==0)
    {
        return result;
    }
    else
    {
        return result+sum(num);
    }

}


int main()
{
    int num;
    printf("enter the value for the number ");
    scanf("%d",&num);
    if (num<0)
    {
        num=-num;
    }
    sum(num);
    printf("the sum of digits is %d\n",sum(num));
    return 0;
}

