#include <stdio.h>

int is_strong_signal(int strength)
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

void check_signal(int strength)
{
    if (is_strong_signal(strength) == 1)
    {
        printf("Strong signal detected.");
    }
    else
    {
        printf("No signal detected.");
    }
}


int main()
{
    int strength;
    printf("enter the value of strength ");
    scanf("%d",&strength);
    is_strong_signal(strength);
    printf("%d\n",is_strong_signal(strength));
    check_signal(strength);
    return 0;
}

