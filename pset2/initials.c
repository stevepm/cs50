#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
		string fullName = GetString();

		int nextWord = 1;
		int nameLength = strlen(fullName);
		for (int i = 0; i < nameLength; i++)
		{
				if (nextWord == 1)
				{
						printf("%c", toupper(fullName[i]));
						nextWord = 0;
				}
				if (fullName[i] == ' ')
				{
						nextWord = 1;
				}
		}
		printf("\n");
}
