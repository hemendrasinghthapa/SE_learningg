#include<stdio.h>
int main()
{
	int choice=0,num1,num2;
//	float c=0,d=0;
	
	int add(){
	printf("enter a number");
	scanf("%d",&num1);
	printf("enter a number");
	scanf("%d",&num2);
	printf("num1 is %d num2 is %d\n",num1,num2);
	printf("add is total %d\n",num1+num2);
	}
	int sub(){
	printf("enter a number");
	scanf("%d",&num1);
	printf("enter a number");
	scanf("%d",&num2);
	printf("num1 is %d num2 is %d\n",num1,num2);
	printf("sub is total %d\n",num1-num2);
	}
	int multi(){
	printf("enter a number");
	scanf("%d",&num1);
	printf("enter a number");
	scanf("%d",&num2);
	printf("num1 is %d num2 is %d\n",num1,num2);
	printf("multi is total %d\n",num1*num2);
	}
	int div(){
	printf("enter a number");
	scanf("%d",&num1);
	printf("enter a number");
	scanf("%d",&num2);
	printf("num1 is %d num2 is %d\n",num1,num2);
	printf("div is total %d\n",num1/num2);
	}

	printf("\t\t\t\t\t\t\t Calculator\n");
	printf("choose your option\n");
	printf("1 type for addtion\n");
	printf("2 type for substraction\n");
	printf("3 type for multiplication\n");
	printf("4 type for divison\n");
	scanf("%d",&choice);
	if(choice == 1){
		printf("you choose add\n");
		add();
	}
	
	if(choice == 2){
		printf("you choose sub\n");
		sub();
	}
	
	if(choice == 3){
		printf("you choose multi\n");
		multi();
	}
	
	if(choice == 4){
		printf("you choose div\n");
		div();
	}
	
}