#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	printf ("enter the alphabet ");
	scanf("%c",&c);
	if(isalpha(c))
	{
		printf("it is an alphabet character");
	}
	else
	{
		printf("it isn't alphabet character");
	}	
}	
