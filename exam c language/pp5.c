#include<stdio.h>
#include<string.h>

struct book{
	
	
	char book[50];
	int price;
	int author;
	
	
};


void main(){
	
	int n;
	printf("num of book:");
	
	scanf("%d",&n);
	
	struct book s1[n];
	
	int i;
	
	for(i=0; i<n; i++){
		
		fflush(stdin);
		printf("book name: ");
		gets(s1[i].book);
		
		printf("author: ");
		scanf("%d",&s1[i].author);
		
		printf("price: ");
		scanf("%d",&s1[i].price);
		
	}
	
	printf("\n\n");
	printf("book name \t author \t price");
	printf("\n\n.......\t......\t");
	
	for(i=0; i<n; i++){
		print("\n\n%s\t\t%d\t\t%d\n" ,s1[i].book,s1[i].author,s1[i].price);
		
		
	}
	
	}


