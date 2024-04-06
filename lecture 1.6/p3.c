#include<stdio.h>

main(){
	
	int no;
	
	printf("Tera number dal:");
	scanf("%d",&no);
	
	if(no==0){
		printf("==========================\n");
		printf("your number 0\n");
		printf("==========================\n");
	}
	else if(no>=0){
		printf("==========================\n");
		printf("Tera number positive hai\n");
		printf("==========================");
		
	}
	
	else{
		printf("==========================\n");
		printf("Tera number nagtive hai\n");
		printf("==========================");
	}
}
