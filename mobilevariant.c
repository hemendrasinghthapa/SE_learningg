#include<stdio.h>
int main(){
	
	int clr,m,choice,storagec;
	int ch=0,con;
	long long int dc;
	
	int overview(storagec)
	{
		printf("your order details\n");
//		printf("model : %c\n",model);
	printf("storage: %dGB\n",storagec);
//		printf("colour: %c\n",clrs);
//		printf("price: %d\n",rs);
		
		
	}
	
	int payment(){
		printf("you choose payment method\n");
		printf("1)cash\n2)debitcard\n3)creditcard\n");
		scanf("%d",&choice);
		if(choice==1){
			printf("you choose cash method\n");
			printf("type 1 to confirm\n");
			scanf("%d",&con);
			if(con == 1){
				printf("your purchase confirm\n");
				printf("have a nice day");
			}
			else{
				printf("your purchase cancel\n");
			}
			
		}
		else if(choice==2){
		printf("you choose debit card\n");
		printf("debit card number\n");
		scanf("%d",&dc);
		printf("debit card number is %lld\n",dc);
		
		}
		else if(choice==3){
			printf("you choose credit card\n");
		}
	}
	
	int addcart()
	{
		printf("please verify\n");
		scanf("%d",&choice);
		if(choice==1){
			printf("done\n");
		}
		else{
			printf("try again\n");
		}
	}
	
	int color(){
		printf("choose your color\n");
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
	
	int storage(int rom1,int rom2,int rom3){
		printf("you choose storage\n");
		printf("1)128gb\n2)256gb\n3)512gb\n");
		scanf("%d",&storagec);
		
		if(storagec == 1)
		{
			printf("you choose 128gb\n");
			printf("price your mobile %d\n",rom1);
		}
		else if(storagec == 2)
		{
			printf("you choose 256gb\n");
			printf("price your mobile %d\n",rom2);
		}
		else if(storagec == 3)
		{
			printf("you choose 512gb\n");
			printf("price your mobile %d\n",rom3);
		}
		}	

	int apple(){
		printf("choose variant\n");
		printf("1)iphone14\n");
		printf("2)iphone15\n");
		scanf("%d",&m);
		
		if(m == 1){
			printf("you choose iphone 14\n");
			
		}
		else if(m == 2)
		{
			printf("you chooose iphone 15\n");
		}
	}
	int samsung(){
		printf("choose variant\n");
		printf("1)Samsung s23\n");
		printf("2)Samsung fold4\n");
		scanf("%d",&m);
		
		if(m == 1){
			printf("you choose Samsung s23\n");
			
		}
		else if(m == 2)
		{
			printf("you chooose Samsung fold4\n");
		}
	}

	
	int brand(){
		printf("welcome to mobile shop\n");
		printf("choose your brand\n");
		printf("1)Apple\n");
		printf("2)Samsung\n");
		scanf("%d",&ch);
		
		if(ch == 1){
			printf("you choose apple\n");
			apple();
			color();
//			storage();
			addcart();
			payment();
		}
		else if(ch == 2){
			printf("you choose samsung\n");
			samsung();
			color();
//			storage();
			overview();
			addcart();
			payment();
		}
		else{
			printf("you brand not aviable\n");
		}	
	}
	
	
	brand();
	
	
	
}