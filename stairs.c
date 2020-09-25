#include<stdio.h>
main()
{
	int i,stairs,j;
	printf("Enter no of stairs : ");
	scanf("%d",&stairs);
	for(i=0;i<stairs;i++)
	{
		for(j=0;j<=i;j++)
		printf("01");
		printf("\n\n");
 }
}
