#include<stdio.h>
	int choice,m,storagec,clr,rom1,rom2,rom3;
	int cart;
	
	int storage(rom1,rom2,rom3){
		printf("please choose storage\n");
		printf("1)128gb\n2)256gb\n3)512gb\n");
		scanf("%d",&storagec);
	
	if(storagec==1){
		printf("you choose 128gb\n");
		printf("price of your mobile %d \n",rom1);
	}
	else if(storagec==2){
		printf("you choose 256gb\n");
		printf("price of your mobile %d \n",rom2);
	}
	else if(storagec==3){
		printf("you choose 512gb\n");
		printf("price of your mobile %d \n",rom3);
	}
	
	}
	int color(){
		printf("please choose color\n");
		printf("1)red\n2)white\n3)black\n");
		scanf("%d",&clr);
	if(clr==1){
		printf("you choose red color\n");
	}
	else if(clr==2){
		printf("you choose white color\n");
	}
	else if(clr==3){
		printf("you choose black color\n");
	}
	}
	
	int addcart(){
		
		printf("please verify\n");
		scanf("%d",&choice);
		
		
		if(choice==1){
			printf("Done");
		}
		
		else{
			printf("try again");
		}
	}
	
	int iphone(){
		printf("choose variant\n");
		printf("1)iphone12\n");
		printf("2)iphone13\n");
		printf("3)iphone14\n");
		scanf("%d",&m);
	if(m==1)
	{
		printf("you choose iphone12\n");
		color();
		storage(65000,74000,83000);
	}
	
    else if(m==2)
	{
		printf("you choose iphone13\n");
		color();
		storage(85000,97000,110000);
	}
	
    else if(m==3)
	{
		printf("you choose iphone14\n");
		color();
		storage(98000,100000,110000);
	}
}
	
		int brandfunc(){
	printf("\t\t\t\t\t\twelcome to mobile shop\n");
	printf("choose your brand\n");
	printf("1)apple\n");
	printf("2)Samsung\n");
	printf("3)Vivo\n");
	scanf("%d",&choice);

	if(choice==1){
		printf("you choose apple\n");
		iphone();
		addcart();  
	}
	
	else if(choice==2){
		printf("you choose Samsung\n");
	}
	else if(choice==3){
		printf("you choose Vivo\n");
	}
	 
	 }
    int main(){
     	 brandfunc();
	   	
	}
     	
     	
     	
     	
      
 
 
	
