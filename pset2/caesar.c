#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Please enter a non-negative integer");
		return 1;
	}
	int caesar = atoi(argv[1]);
	printf("%d", caesar);
	if (caesar < 0)
	{
		printf("Please enter a number greater than 0");
		return 1;
	}


	return 0;
}