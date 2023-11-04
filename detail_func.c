#include<stdio.h>

int a,b;
char c[10];
char model1[] = "Iphone 15";
char model2[] = "Iphone 15 pro";

int ov(){
	
	printf("Product details\n");
	
	if(a==1){
		printf("Model : %s\n",model1);
	}
	else if(a==2){
		printf("Model : %s\n",model2);
	}
	
	printf("Storage : %dGB\n",b);
	printf("Color : %s\n",c);
	
}

int storage(){
		printf("enter your choice for storage\n");
		scanf("%d",&b);
		
		if(b==128){
			printf("you choose %dGB\n",b);
		}
		else if(b==256){
			printf("you choose %dGB\n",b);
		}
	
}

int color(){
		printf("enter your choice of color\n");
		scanf("%s",&c);
			if(c =='black'){
				printf("you choose black\n");	
			}	
			else if(c=='grey'){
				printf("you choose grey\n");	
			}	
}
int main(){
	
	printf("enter your choice\n");
	scanf("%d",&a);
	
	if(a==1){
		printf("you choose %s\n",model1);
			storage();
			color();
					
			}	
		else if(a==2){
			printf("you choose %s\n",model2);
			storage();
			color();
		}
	
	ov();
}