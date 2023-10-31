//#include<stdio.h>
//
//int main()
//{
//	for(int i=0;i<=5;i++){
//	
//	for(int j=0;j<=i;j++){
//		printf("%d",i);
//	}
//	printf("\n");
//	}
//	


//			 *
//			**
//	       ***
//		  ****
//		 *****



//#include<stdio.h>
//int main()
//{
//	int j;
//	for(int i=5;i>0;i--){
//		
//		for(j=1;j<=i-1;j++){
//		printf("   ");
//		}
//		for(int s=5;s>=j;s--){
//		printf(" * ");	
//		
//		}
//		printf("\n");
//	
//	}	
//	}	
	
						//  Kaju katli  //
	
//#include<stdio.h>
//int main(){
//	int j;
//	for(int i=10;i>0;i--){
//
//	for(j=1;j<=i-1;j++){
//		printf(" ");
//	}
//	for(int s=10;s>=j;s--){
//		printf(" *");
//} 
//printf("\n");
//}
//
//	for(int i=0;i<9;i++){
//
//	for(j=0;j<=i;j++){
//		printf(" ");
//	}
//	for(int s=9;s>=j;s--){
//		printf(" *");
//} 
//printf("\n");
//	}
//}


#include<stdio.h>
int main(){
	int i,j,s,l=0;
	for(int i=1;i<=5;i++){
		
	for (int s=1;s<=5-i;s++){
		printf("");
	}
	for (int j=i;j>=1;j--){
	printf(" *");
	}
	for(int k=1;k>=l;k--){
		printf(" 1");
	}
	l++;
	printf("\n");
	}
	
}




