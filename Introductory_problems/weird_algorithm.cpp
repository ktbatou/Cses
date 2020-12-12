#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long int x;
    char str[1000000];
 
    if (scanf("%s", str) == 1)
        x = atoi(str);
    else
        return (0);
    printf("%ld ",x);
    while (x > 1)
    {
        if ((x % 2) == 0)
        {
            x /= 2;
            printf("%ld ", x);
        }
        else if ((x % 2) != 0)
        {
            x *= 3;
            x += 1;
            printf("%ld ", x);
        } 
    }
    return (0);
} 