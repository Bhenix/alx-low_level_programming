#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
        {
                printf("if the number is greater than 0: is positive\n");
        }
        else if (n < 0)
        {
                printf("if the number is less than 0: is negative\n");
        }
        else
        {
                printf("if the number is 0: is zero\n");
        }
        return (0);
}
