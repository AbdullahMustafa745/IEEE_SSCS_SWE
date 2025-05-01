#include "my_putchar.h"

int my_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        }
        else
        {
            return 0;  // Invalid character
        }
    }

    return result * sign;
}

void print_int(int num)
{
    if (num < 0)
    {
        my_putchar('-');
        num = -num;
    }
    if (num >= 10)
    {
        print_int(num / 10);
    }
    my_putchar((num % 10) + '0');
}

int main()
{
    char str1[] = "1234";
    int number = my_atoi(str1);
    print_int(number);
    my_putchar('\n');
    return 0;
}

