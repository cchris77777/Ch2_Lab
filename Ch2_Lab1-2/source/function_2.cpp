#include<stdio.h>
#include<stdlib.h>
int Han_Xin_2() {
	char sign = 'X';
	char sign2 = '-';
	printf("(2)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 || i == 9 || i == 1 || i == 2 || i == 8 || i == 7
				|| j == 0 || j == 9 || j == 1 || i == 2 || j == 8 || j == 7)
				printf("%c", sign);
			else printf("%c", sign2);
		}
		printf("\n");
	}
	return 0;
}