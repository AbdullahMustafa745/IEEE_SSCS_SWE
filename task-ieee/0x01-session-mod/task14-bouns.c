#include <stdio.h>  // for printf

// Custom absolute value function
int my_abs(int x) {
    return (x < 0) ? -x : x;
}

// Custom atoi function (returns 0 if invalid input)
int my_atoi(const char *str) {
    int i = 0, sign = 1, result = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            return 0; // Invalid character detected
        }
    }

    return result * sign;
}

int main() {
    int sum = 0;

    int argc = 5;
    char *argv[] = {"9", "10", "-5", "8", "7"};


    for (int i = 0; i < argc; i++) {
        int val = my_atoi(argv[i]);
        sum += val;
    }

    printf("Sum is: %d\n", sum);
    printf("Absolute value of sum: %d\n", my_abs(sum));

    return 0;
}

