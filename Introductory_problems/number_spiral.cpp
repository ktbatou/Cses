#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int test;
    long int tab[10][10];
    int i;
    int j;
    int startx;
    int starty;
    int n;
    int start;
    int end;
    int round;

    i = 0;
    j = 0;
    n = 1;
    round = 2;
    startx = 0;
    starty;
    end = 2;
    while (n <= 9)
    {
        for (j = startx; j < end; j++)
        {
            tab[i][j] = n++;
        }
        starty++;
        for(i = starty ; i < end ; i++)
        {
            tab[i][end - 1] = n++;
        }
        end--;
        if (j > end - 1)
        { 
            for (j = end; j >= startx; j--)
            {
                tab[end][j - 1] = n++;
            }
            start = 0;
            end = ++round;
        }
        if (i > end - 1)
        {
            for (i = end; i >= starty ; --i)
            {
                tab[i][j] = n++;
            }
            //sttx--;
        }
    }
    i = 0;
    while (i < 3)
    {
        for (int j = 0; j < 3; j++)
          printf("%ld ", tab[i][j]);
        printf("\n");
        i++;
    }
    return (0);
}