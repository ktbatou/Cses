#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    long int num[200000];
    int max;
    long int count;

    max = 0;
    cin >> max;
    count = 0;
    for (int i = 0; i < max; i++)
        cin >> num[i];
    for (int i = 1; i < max; i++)
    {
        if (num[i] < num[i - 1])
        {
            count += num[i - 1] - num[i];
            num[i] += num[i - 1] - num[i];
        }


    }
    printf("%ld\n", count);
    return (0);
}