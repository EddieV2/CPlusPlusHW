#include "stdafx.h"
#include <stdlib.h>
#include "stdio.h"
#include <iostream>

int main(void) {
	int x = 0;
	int row = 0;


	printf("Please enter a number between 1 and 10 \n");
	scanf_s("%d", &x);
	

	for (row = 0; row < x; row++) {
		printf("*");
	}
	printf("\n");

	if (x > 1){
		for (int column = 2; column < x; column++) {
			printf("*");

			for (int column = 2; column < x; column++) {
				printf(" ");
			}

			printf("*\n");
		}

		for (row = 0; row < x; row++) {
			printf("*");
		}

		printf("\n");
	}
	system("PAUSE");

	return 0;
}

