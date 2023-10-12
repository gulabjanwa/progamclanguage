#include<stdio.h>
int main()
{
	char name[10];
	printf("\nenter your name\n");
	//scanf("%s",address);
     gets(name);
	printf("\nyour name is : %s",name);
	char address[10];
	{
		printf("\n enter your address\n");
		scanf("%s",&address);
	
	printf("\n%s your address is : %s",name,address);
    }
	int age;
	{
		printf("\nenter your age\n");
		scanf("%d",&age);
		printf("\n%s your age is : %d",name,age);
	}
	int date;
	char month[10];
	int year;
	{
		printf("\nenter your date,month,year\n");
		scanf("%d",&date);
		scanf("%s",&month);
		scanf("%d",&year);
		printf("\n%s your dateof birth is : %d,%s,%d",name,date,month,year);
	}
	
}