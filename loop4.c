#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)   //row
	{
		for(j=i;j<5;j++)   //space
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
    }
}