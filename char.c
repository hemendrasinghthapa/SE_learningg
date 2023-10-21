#include<stdio.h>


/* 
{
char a,b,c,d,e;
printf("enter your name :\n");
scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);
printf("your name is : %c%c%c%c%C",a,b,c,d,e);
}
*/

//main()
//{
//
//char name [50];
//printf("enter your name : \n");
//scanf("%s",&name);
//printf("your name is : %s",name);
//}


//main()
//{
//	char name [50];
//	printf("enter your name :\n");
//	gets(name);
//	printf("your name is : %s", name);
//}

main()
{
	char name [50];
	char city [100];
	int age,marks;
	  
	  
    printf("enter your name : \n");
    gets(name);
	printf("enter your age : \n");
	scanf("%d",&age);
	printf("enter your city : \n");
	gets(city);
	printf("enter your marks : \n");
	scanf("%d",&marks);
	
	printf("your name is : %s \n your age is : %d \n your city is : %s \n and marks are : %d",name,age,city,marks);
	}
    
    