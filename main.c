#include <stdio.h>

#define SIZE 8

int main()
{
	int bla[] = {1, 3, 4, 5, 7, 3, 2, 4};

	for(int i = 0; i < SIZE; i++)
	{
		printf("%d: %d\n", i, bla[i]);
	}

	return 0;
}


