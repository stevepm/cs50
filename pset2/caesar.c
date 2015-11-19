#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
	if (argc < 2)
	{
		printf("Please enter a non-negative integer");
		return 1;
	}
	int caesar = atoi(argv[1]) % 26;
	if (caesar < 0)
	{
		printf("Please enter a number greater than 0");
		return 1;
	}
	int upper = 65;
	int lower = 97;
	int alphabet = 26;
	string encrypt = GetString();
	int length = strlen(encrypt);
	for (int i = 0; i < length; i++)
	{
		if (!isalpha(encrypt[i]))
		{
			printf("%c", encrypt[i]);
		}
		else if (isupper(encrypt[i]))
		{
			int shiftBy = ((encrypt[i] - upper) + caesar) % alphabet;
			int newLetter = shiftBy + upper;
			printf("%c", (char) newLetter);
		}
		else
		{
			int shiftBy = ((encrypt[i] - lower) + caesar) % alphabet;
			int newLetter = shiftBy + lower;
			printf("%c", (char) newLetter);
		}
	}
	printf("\n");

	return 0;
}