#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
	float f;
	do{
	printf("O hai! How much change is owed?\n");
	f = GetFloat();
	} while (f < 0);
	int change = (int) round(f*100.0);
	
	int coins = 0;
	int quarter = 25;
	int dime = 10;
	int nickel = 5;
	int penny = 1;

	while (change != 0){
		if (change >= quarter){
			change -= quarter;
			coins++;
		} else if(change >= dime){
			change -= dime;
			coins++;
		} else if(change >= nickel){
			change -= nickel;
			coins++;
		} else {
			change -= penny;
			coins++;
		}
	}
	printf("%d\n", coins);
}