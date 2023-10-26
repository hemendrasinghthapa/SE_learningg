#include<stdio.h>
int main(){
	float run,match,ball,over;
	float sr,avg,eco,brun;
	char choice;
	printf("\t\t\t\t\t Welcome To The Cricket World Cup\n\a\a\a\a\a\a ");
	printf("do you want to Player type (type y for yes n for no)\n ");
	scanf("%c",&choice);
	fflush(stdin);
	
	if(choice == 'y' || choice == 'Y'){
	printf("Type of Player \n\n");	
    printf("Type B for Batsman \n");
	printf("Type A for All Rounder \n");
	printf("Type O for Bowler \n");
	scanf("%c",&choice);
	fflush(stdin);
	}
	if(choice == 'b' || choice == 'B') {
		printf("you choose a batsman \n");
		printf("enter runs \n");
		scanf("%f",&run);
		printf("enter matches \n");
		scanf("%f",&match);
		printf("enter ball \n");
		scanf("%f",&ball);
		sr = (run/ball)*100;
		printf("strike rate is %f \n",sr);
		avg = (run/match);
		printf("avrage is %f \n",avg);
	}
	
	else if(choice == 'a' || choice == 'A'){
		printf("you choose a All Rounder \n");
		printf("enter runs \n");
		scanf("%f",&run);
		printf("enter matches \n");
		scanf("%f",&match);
		printf("enetr balls \n");
		scanf("%f",&ball);
		sr = (run/ball)*100;
		printf("strike rate is %f \n",sr);
		avg = (run/match);
		printf("avrage is %f \n",avg);
		
//      Bowler
		printf("enter over \n");
		scanf("%f",&over);
		printf("enter run \n");
		scanf("%f",&brun);
		eco = (brun/over);
		printf("bowler economy is %f \n",eco);
		
	}
	 
	else if(choice == 'o' || choice == 'O'){
		printf("you choose a Bowler \n");
		printf("enter over \n");
		scanf("%f",&over);
		printf("enter run \n");
		scanf("%f",&brun);
		eco = (brun/over);
		printf("bowler economy is %f \n",eco);
	}
		
	
}