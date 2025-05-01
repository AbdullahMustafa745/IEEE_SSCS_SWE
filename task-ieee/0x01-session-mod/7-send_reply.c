#include <stdio.h>

char *get_reply()
{
    static char x[]="get replied done";
    return x;
}


int main()
{

    char *reply=get_reply();
    printf("%s",reply);
    return 0;
}
