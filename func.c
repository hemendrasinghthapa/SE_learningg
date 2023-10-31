#include<stdio.h>
main(){
	char name[50], choice;
	float total=0, per=0;
	float marks[10];
	int i=0;
	
	int fun(void){
		fflush(stdin);
		printf("enter your name\n");
		gets(name);
		for(i=0;i<5;i++){
			printf("Enter your marks\n");
			scanf("%f",&marks[i]);
			total = total + marks[i];
		}
		printf("your name is %s\n",name);
		printf("your marks are %.2f\n",total);
		per = total/5;
		printf("your percentage are %.2f\n",per);
	}	
	do{
	fun();
		fflush(stdin);
		
		printf("enter y to restart loop\n");
			scanf("%c",&choice);
	}
	while(choice == 'y');
		fflush(stdin);
		printf("invalid input, please enter y to restart loop\n");
		scanf("%c",&choice);
		if(choice == 'y'){
			fun();	
		}
	else{
		printf("invalid input\n");
	}
}