#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
	if (argc < 2)
	{
		printf("Please enter a string");
		return 1;
	}
	int upper = 65;
	int lower = 97;
	int alphabet = 26;
	string vigenere = argv[1];
	int vlength = strlen(vigenere);
	int vnumbers[vlength];
	for (int i = 0; i < vlength; i++)
	{
			if (!isalpha(vigenere[i]))
			{
				printf("not a string");
				return 1;
			}
			else
			{
				if (isupper(vigenere[i]))
				{
					vnumbers[i] = vigenere[i] - upper;
				}
				else
				{
					vnumbers[i] = vigenere[i] - lower;
				}
			}
	}
	string encrypt = GetString();
	int length = strlen(encrypt);
	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (!isalpha(encrypt[i]))
		{
			printf("%c", encrypt[i]);
		}
		else 
		{
			int vnumber = counter%vlength;
			counter++;
			if (isupper(encrypt[i]))
			{
				int shiftBy = ((encrypt[i] - upper) + vnumbers[vnumber]) % alphabet;
				int newLetter = shiftBy + upper;
				printf("%c", (char) newLetter);
			}
			else
			{
				int shiftBy = ((encrypt[i] - lower) + vnumbers[vnumber]) % alphabet;
				int newLetter = shiftBy + lower;
				printf("%c", (char) newLetter);
			}
		}
	}
	printf("\n");

	return 0;
}