#include <stdio.h>

void boost_signal(int signal_strength)
{
    printf("booster: signal strength = %d\n",signal_strength);
}

int main()
{
    int signal_strength = 0;
    printf("global signal_strength = %d\n",signal_strength);
    boost_signal(100);
    return 0;
}

