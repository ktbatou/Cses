#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	char str[1000000];
	int count;
	int	flag;
	int	temp;

	count = 1;
	flag = 0;
	temp = 0;
	cin >> str;
	for(int i = 0; str[i]; i++)
	{
		if (str[i] == str[i - 1] && flag == 1)
			count++;
		else
		{
			
			count = 1;
		}
		if (temp < count)
			temp = count;
		flag = 1;
	}
	printf("%d\n", temp);
	return (0);
}