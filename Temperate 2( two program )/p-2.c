#include<stdio.h>
main(){
	
	int A,no;
	
	printf("enter your no:");
	scanf("%d",&no);
	
	while(no != 0){
		no= no/10;
		A++;
	}
	printf("no of digit: %d",A);
	
	
}
