#include<stdio.h>

main(){
	
	int choice;
	printf("enter number of choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("sunday");
			break;
			
      	case 2:
			printf("Monday");
			break;
			
			
    	case 3:
			printf("Tuesday");
			break;
			
		case 4:
			printf("Wensday");
			break;
			
		case 5:
			printf("Thursday");
			break;
			
		case 6:
			printf("Friday");
			break;
			
		case 7:
			printf("Saterday");
			break;
			
			default:	
		    printf("enter your valid choice");		
					
							
			
	}
	
}
