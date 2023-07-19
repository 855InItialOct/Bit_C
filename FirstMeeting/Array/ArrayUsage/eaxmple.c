#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;

	while (i < 10)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	i = 0;

	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}