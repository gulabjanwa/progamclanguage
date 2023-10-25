#include<stdio.h>
int main()
{
	printf("hello sir\n");
	printf("welcome to bank of baroda\n");
	char name[10];
	printf("enter your name\n");
	gets(name);
	printf("\nyour name is:%s\n",name);
	
	int money;
	
	printf("\n  how many money in my account\n");
	scanf("%d",&money);
	printf("%s in your account only %d :",name,money);
	
	int choice;
	printf("\n sir what your choice?? 1)deposited \n 2)withdraw\n");
	scanf("%d",&choice);
//	printf("\n you enter 1st choice :%d",choice);
	
	
	    
	 if(choice ==1)
	 {
	 	int rupee;
	 	printf("\nYou  want to deposited  money in your account\n");
	 	printf("\n yes sir");
	 
	 	printf("\nsir  how many money you want to deposited in your account\n",name);
	 	scanf("%d",&rupee);
	 	printf("\nI want %d rupee deposited in my account:\n",rupee);
	 	printf("ok sir\n");
	 	
	 	
	 	int choice;
	 	printf("sir you want to check your bank balance\n 1)yes\n 2)no\n");
	 	scanf("%d",&choice);
	 	if(choice == 1)
	 	{
	 		printf("yes i want to check");
	 		int total=0;
	 total=money+rupee;
	 {
	 	printf("\n %s now your total available amount is:%d\n",name,total);
	 }
	 		
		 }
		 else if(choice == 2)
		 {
		 	printf("no i do not want to check");
		 }
		 else
		 {
		 	printf("\nenter a valid choice");
		 }
	 	
	 	printf("\n okk sir\n");
	 	
	 
}


	 else if(choice ==2)
	 {
	 int rupee;
	 	printf("\n%s you want to withdraw your money\n",name);
	 	printf("\n yes");
	 
	 	printf("\n%s how many money you want to withdraw to your account\n",name);
	 	scanf("%d",&rupee);
	 	printf("\nI want %d rupee withdraw in my account:\n",rupee);
		 printf("\nok sir\n");
		 
		 int choice;
	 	printf("sir you want to check your bank balance\n 1)yes\n 2)no\n");
	 	scanf("%d",&choice);
	 	if(choice == 1)
	 	{
	 		printf("yes i want to check my balance\n");
		 int total=0;
		 total=money-rupee;
		 {
		 	printf("\n%s now in your account only %d rupee available :",name,total);
			 }
	}
	else if(choice == 2)
	{
		printf("\n no it's ohk");
	}
	else 
	{
		printf("\n enter valid choice");
	}
	 }
	 printf("\n okk sir done\n");
	 printf("\n thank you\n");
	 
	 
	  
	 
	

	

	
		return 0;
}