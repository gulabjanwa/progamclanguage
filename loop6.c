#include<stdio.h>
main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=10;j>i;j--)
		{
			printf(" ");
			
		}
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
	
	printf("\n");
}
   for(int i=1;i<=10;i++)
   {
   	for(int j=1;j<i;j++)
   	{
   		printf(" ");
   		
	   }
	   for( int k=i;k<=10;k++)
	   {
	   	printf("* ");
	   }
   
   printf("\n");
}
}