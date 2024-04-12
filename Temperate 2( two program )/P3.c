#include<stdio.h>
main(){
	
	int n , SUM = 0 , firstdigit , lastdigit;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	lastdigit = n % 10;
	
	while(n >= 10)
	{
		n = n / 10;
	}
	firstdigit = n;
	
	SUM = firstdigit + lastdigit;
	
	printf("Tame pahle first and last number nakho = %d",SUM);
}
