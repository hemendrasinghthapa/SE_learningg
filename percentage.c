#include<stdio.h>
int main(){
	
	int marks;
	float per,total = 0;
	printf("enter your English marks \n");
	scanf("%d",&marks);
	total = marks;
	
	printf("enter your Hindi marks \n");
	scanf("%d",&marks);
	total = total+marks;
	
	printf("enter your Social Science marks \n");
	scanf("%d",&marks);
	total = total+marks;
	
	printf("enter your science marks \n");
	scanf("%d",&marks);
	total = total+marks;
	
	printf("enter your maths marks \n");
	scanf("%d",&marks);
	total = total+marks;
	
	printf("enter your Sanskrit marks \n");
	scanf("%d",&marks);
	total = total+marks;
	
	printf("total marks %f \n",total);
	per = total/6;
	printf("percentage  %f \n",per);
	
	
	
	
}