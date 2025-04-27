#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("%d %d\n",*a,*b);
}


int main()
{
    int x=3,y=2;
    int *a=&x;
    int *b=&y;
    printf("%d %d\n",*a,*b);
    swap(&x,&y);
    return 0;
}

