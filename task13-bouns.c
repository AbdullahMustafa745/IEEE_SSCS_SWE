#include <stdio.h>
#include <ctype.h>

int counter(char *mystring)
{
    int in_word=0;
    int count=0;
    while (*mystring)
    {
        if (isspace(*mystring))
        {
            in_word=0;
        }
        else
        {
            in_word=1;
            count ++;
        }
        mystring++;
    }

    return count;
}

int main() 
{
    char mystring[]="hello from ieee";


    printf("%d\n", counter(mystring));
    return 0;
}

