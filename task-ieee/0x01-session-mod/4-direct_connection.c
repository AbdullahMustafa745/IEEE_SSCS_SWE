#include <stdio.h>

int main()
{
    int x=98;
    int *ptr=&x;

    printf("Address stored in ptr: %p\n", ptr);
    printf("Value of signal: %d\n", *ptr);
    return 0;
}
