#include <stdio.h>

int is_response_detected(int strength)
{
    if (strength >= 50)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int main()
{
    int strength;
    printf("enter the value of strength ");
    scanf("%d",&strength);
    is_response_detected(strength);
    printf("%d",is_response_detected(strength));
    return 0;
}
