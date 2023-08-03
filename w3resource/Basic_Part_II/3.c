#include <stdio.h>

main()
{
	int a, b, c;

	printf("Enter three numbers ranging from 1 to 100:\n");
	printf("Enter the first:\n");
	scanf("%d", &a);
	printf("Enter the second:\n");
	scanf("%d", &b);
	printf("Enter the third:\n");
	scanf("%d", &c);

	if (((a<b) && (b<c)) || ((c<b) && (b<a)))
	       printf("The second largest number is %d\n", b);
	else if (((b<a) && (a<c)) || ((c<a) && (a<b)))
		printf("The second largest number is %d\n", a);
	else
		printf("The second largest number is %d\n", c);

	return 0;
}

