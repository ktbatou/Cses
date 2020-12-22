#include <stdio.h>
#include <stdio.h>
#include <algorithm> 
#include <iostream>
#include <vector>
//#include<bits/stdc++.h> 
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long int> persons;
    int temp;
    int child;
    long long int size;
    long long int length;
    long long int diff;
    long long int mid;
    long long int low;

    low = 0;
    cin >> child >> size;
    for (int i = 0; i < child; i++)
    {
        cin >> temp;
        persons.push_back(temp);
    }
    sort(persons.begin(), persons.end(), greater<int>());
    for (int i = 0; i < child; i++)
    {
        if (persons[i] < size)
        {
            diff = size - persons[i];
            mid = low + (child - low) / 2;
            
        } 

    }
    return (0);
    
}