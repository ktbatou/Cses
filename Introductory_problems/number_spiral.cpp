#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    long long int result[100000];
    int test;
    int x;
    int y;

    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> y;
        cin >> x;
        if (y >= x)
        {
            if (y % 2 == 0)
            {
                x--;
                result[i] = ((y * y) - x);
            }
            else
            {
                y -= 1;
                result[i] = ((y * y) + 1) + (x - 1);
            } 
        }
        else if (x > y)
        {
            if (x % 2 != 0)
            {
                y -= 1;
                result[i] = (x * x) - y;
            }
            else
            {
                x -= 1;
                y--;
                result[i] = ((x * x) + 1) + y;
            }
        }
        if (x == 1 && y == 1)
            result[i] = 1;
    }
    for (int i = 0; i < test; i++)
    {
        cout << result[i] << "\n";
    }
    
    
    return (0);
}