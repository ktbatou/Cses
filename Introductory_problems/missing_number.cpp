#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int *numbers;
	int	max;
	int index;
	int i;

	i = 0;
	if (scanf("%d", &max) <= 0)
		exit (0);
	numbers = (int *)malloc(sizeof(int) * max + 1);
	numbers = (int *)memset(numbers, 0, max);
	while (i < max - 1)
	{
		if (scanf("%d", &index) <= 0)
			exit (0);
		numbers[index] = 1;;
		i++;
	}
	index = 1;
	while (index <= max)
	{
		if (numbers[index] == 0)
			printf("%d\n", index);
		index++;
	}
	free(numbers);
	return (0);
}
