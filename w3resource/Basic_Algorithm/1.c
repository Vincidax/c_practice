/* a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum. */
#include <stdio.h>
int AddMul(int a, int b);
main()
{
	AddMul(1, 2);
	AddMul(2, 2);
}
int AddMul( int a, int b)
{
	int result;
	if (a != b){
		result = a + b;
		printf("%d\n", result);
	}
	else if (a == b) {
		result = 3 * (a + b);
		printf("%d\n", result);
	}
}



