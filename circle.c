#include<stdio.h>
	float base,h,r;
	int l,b;
	int circle(){
	printf("area of circle\n");
	scanf("%f",&r);
	printf("area of circle is %.2f",3.14*r*r);
	}
			
	int rectangle(){
	printf("area of rectangle\n");
	scanf("%d%d",&l,&b);
	printf("area of rectangle is %d",l*b);
	}
	

	int triangle(){
	printf("area of triangle\n");
	scanf("%f%f",&h,&base);
	printf("area of triangle is %.2f\n",h*base/2);
	}

		
int main(){
	int c;
	printf("enter your choice\n");
	printf("press 1 circle\n");
	printf("press 2 rectangle\n");
	printf("press 3 triangle\n");
	scanf("%d",&c);
	if(c==1){
	circle();
	}
	
	else if(c==2){
		rectangle();
	}
	
	else if(c==3){
		triangle();
	}
	
}