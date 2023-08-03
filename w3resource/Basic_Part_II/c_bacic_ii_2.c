#include <stdio.h>

main()
{
	char array[20], bray[20];
	int i, x, y, a = 1;

	printf("Enter the string:\n");
	scanf("%s", array);
	for(i=0; i<20; i++)
		bray[i] = array[i];
	printf("%s\n", bray);
	printf("Enter the number corresponding to the character on which to start:\n");
	scanf("%d", &x);
	printf("Enter the number to end on:\n");
	scanf("%d", &y);
	for (i= x - 1; i < y; i++){
		array[i] = bray[y - a];
		a++;
	}
	printf("%s\n", array);
	return 0;
}

