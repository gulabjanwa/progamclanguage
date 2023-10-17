#include<stdio.h>
int main()
{
	printf("hello sir\n");
	printf("welcome to bank of baroda\n");
	char name[10];
	printf("enter your name\n");
	gets(name);
	printf("\nyour name is:%s\n\n",name);
	
	int money;
	printf("\nhow many money in my account\n");
	scanf("%d",&money);
	printf("%s in your account only %d :",name,money);
	
	int choice;
	printf("\n\nwhat your choice?? 1)deposited \n 2)withdraw\n\n");
	scanf("%d",&choice);
	
	
	    
	 if(choice == 1)
	 {
	 	printf("\n%s you want to deposited your money\n",name);
	 }
	 int rupee;
	 {
	 	printf("\n%s how many rupee you want to deposited in your account\n",name);
	 	scanf("%d",&rupee);
	 	printf("\nI want %d rupee deposited in my account:\n",rupee);
	 }
	 int total=0;
	 total=money+rupee;
	 {
	 	printf("\n %s now your total amount is:%d\n",name,total);
	 } 
	 else if(choice == 2)
	{
		printf("\n%s you want to withdraw your money\n",name);
		
	}
	int rupees;
	{
		printf("\n %s how many rupees you can withdraw",name);
		scanf("%d",&rupees);
		printf("\n I want %d rupees to withdraw in my account",rupees);
		
	}
	

	
	
	
		return 0;
}