#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int num;
	int j;

	cin >> num;
	j = 1;
	if (num <= 3 && num != 1)
	{
		printf("NO SOLUTION\n");
		return (0);
	}
	while (j <= num)
	{
		if (j % 2 == 0)
			printf("%d ", j);
		j++;
	}
	j = 1;
	while (j <= num)
	{
		if (j % 2 != 0)
			printf("%d ", j);
		j++;
	}
	return (0);
}