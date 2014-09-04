#include <stdio.h>

int solve_2750() {
	int nCases, num, nFeet;
	scanf("%d", &nCases);
	for ( num=0; num<nCases; num++)
	{
		scanf("%d", &nFeet);
		if (nFeet%2 != 0)
			printf("0 0\n");
		else if (nFeet%4!=0)
			printf("%d %d\n", nFeet/4+1, nFeet/2);
		else
			printf("%d %d\n", nFeet/4, nFeet/2);
	}
	
	//printf("Hello world!\n");
	return 0;
}
