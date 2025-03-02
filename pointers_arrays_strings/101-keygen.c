#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: Always 0
 */
int main(void)
{
    int sum = 0, c = 0, diff;
    char password[100];

    srand(time(NULL));

    while (sum < 2772)
    {
        if (2772 - sum < 127)
        {
            diff = 2772 - sum;
            password[c] = diff;
            sum += diff;
            c++;
            break;
        }
        password[c] = rand() % 94 + 33;
        sum += password[c];
        c++;
    }

    password[c] = '\0';
    printf("%s", password);

    return (0);
}

