#include <stdio.h>
#include <iterator>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<unsigned long long int> tab;
    unsigned long long int      result;
    int                         n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> result;
        tab.insert(result);
    }
    cout << tab.size();
    return (0);
}

