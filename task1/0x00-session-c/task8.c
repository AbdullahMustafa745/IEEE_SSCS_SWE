#include <stdlib.h>
#include <time.h>


int main(void)
{
	int n,lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n%2==0)
    {
        printf("%d is even\n",n);
    }
    else
    {
        printf("%d is odd\n",n);
    }


    if (n>5)
    {
        printf("%d is greater than 5\n",n);
    }
    else
    {
        printf("%d is less than 5\n",n);
    }
    lastdigit = n%10;
    printf("the lastdigit is %d",lastdigit);

	return (0);
}


