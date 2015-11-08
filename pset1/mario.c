#include <stdio.h>
#include <cs50.h>

int main(void){
	int num;
	do {
		printf("Please enter a number\n");
		num = GetInt();
	} while (num < 0 || num > 23);
	
	for (int i = 0; i < num; i++){
		for (int n = 0; n < num+1; n++){
			if (n >= (num-i-1)){
				printf("#");
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
}