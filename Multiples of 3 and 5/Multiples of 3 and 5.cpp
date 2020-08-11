#include<stdio.h>

int main()
{
	int a[1000];
	int result = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			a[i] = i;
		}
		else
		{
			a[i] = 0;
		}
		result += a[i];
	}
	printf("result: %d", result);
	return 0;
}