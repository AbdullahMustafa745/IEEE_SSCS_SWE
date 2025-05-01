#include <stdio.h>

void print_message(char *msg)
{
    printf("%s",msg);
}


int main()
{
    char x[]= "received message done";
    print_message(x);
    return 0;
}

