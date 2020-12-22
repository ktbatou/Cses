#include <stdio.h>
#include <stdio.h>
#include <algorithm> 
#include <iostream>
#include<bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
 
    vector<long long int> apr;
    vector<long long int> apl;
    long long int diff;
    long long int applicants;
    long long int appatments;
    int n;
    int m;
    int count;
    int x;
    int y;
 
    count = 0;
    x = 0;
    y = 0;
    cin >> n >> m >> diff;
    for (int i = 0; i < n; i++)
    {
        cin >> applicants;
        apl.push_back(applicants);
    }
    sort(apl.begin(), apl.end());
    for (int i = 0; i < m; i++)
    {
        cin >> appatments;
        apr.push_back(appatments);
    }
    sort(apr.begin(), apr.end());
    while (x < n && y < m)
    {
        if(apr[y] >= apl[x] - diff && apr[y] <= apl[x] + diff)
        {
            count++;
            x++;
            y++;
        }
        else if (apr[y] < apl[x] - diff)
            y++;
        else
            x++;
    }
    cout << count;
    return (0);
}