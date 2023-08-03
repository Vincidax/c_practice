#include <stdio.h>

main()
{
	int i, j, n, m, d=0;
	int A[100], B[100], C[100];

	printf("Enter the total number of the first sequence:\n");
	scanf("%d", &n);
	printf("Enter the integers of the first sequence:\n");
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	printf("Enter the total number of the second sequence:\n");
        scanf("%d", &m);
        printf("Enter the integers of the second sequence:\n");
        for(i=0; i<m; i++)
                scanf("%d", &B[i]);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if (A[i] == B[j]){
				C[d] = A[i];
				d++;
			}
		}
	}
	printf("The numbers that are in both sequences are:\n");
	for(i=0; i<d; i++)
		printf("%3d", C[i]);
	printf("\n");
	return 0;
}
