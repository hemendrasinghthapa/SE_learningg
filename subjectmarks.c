#include<stdio.h>
int main (){
	int i=0;
	float total=0,per=0,marks[10];
	char choice,name[50];
	
	fflush(stdin);
	printf("enter your name\n");
	gets(name);
	printf("your name is %s\n",name);
	
	for(i=0;i<5;i++){
	printf("enter your marks\n");
	scanf("%f",&marks[i]);
	total = total + marks[i];	
	}
	printf("your total marks are %.2f\n",total);
	per = total/5;	
	printf("your percentage are %.2f \n",per);
		
	
}