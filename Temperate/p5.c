#include<stdio.h>

main(){
	
	int choice;
	printf("enter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("january");
			break;
	
		case 2:
			printf("febuary");
	    	break;
		
		case 3:
			printf("march");
		    break;
		    
		case 4:
			printf("April");
		    break; 
			
		case 5:
			printf("May");
		    break;
			
		case 6:
			printf("June");
		    break;	
			
		case 7:
			printf("Julay");
		    break;
			
		case 8:
			printf("August");
		    break;
			
		case 9:
			printf("Saptember");
		    break;
			
		case 10:
			printf("Octomber");
		    break;
			
		case 11:
			printf("Nameber");
		    break;
			
		case 12:
			printf("Desember");
		    break;													   
		
			
		default:	
		    printf("enter your valid choice");	
	}
}
