#include <stdio.h>

int main(void){
	int age;
	float weight;
	char first[15], last[15];

	printf("\nWhat is your first name? ");
	scanf(" %s", first);
	printf("What is your last name?");
	scanf(" %s", last);
	
	printf("How old are you? ");
	scanf(" %d", &age);
	printf("How much do you weigh? ");
	scanf(" %f", &weight);

	printf("\nHere is the information you entered:\n");
	printf("Name: %s %s\n", first, last);
	printf("Weight: %.0f\n", weight);

	printf("Age: %d", age);
}