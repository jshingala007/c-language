// write a program is nested if else....

#include<stdio.h>

main(){
	
	int a, b, c, d, e, f, g, h;
	
	printf("enter of value a:");
	scanf("%d",&a); 
	
	printf("enter of value b:");
	scanf("%d",&b); 
	
	printf("enter of value c:");
	scanf("%d",&c); 
	
	printf("enter of value d:");
	scanf("%d",&d); 
	
	printf("enter of value e:");
	scanf("%d",&e); 
	
	printf("enter of value f:");
	scanf("%d",&f); 
	
	printf("enter of value g:");
	scanf("%d",&g); 
	
	printf("enter of value h:");
	scanf("%d",&h); 
	
	
	if(a > b){
		if(a > c){
			if(a > d){
				if(a > e){
					if(a > f){
						if(a > g){
							if(a > h){
								printf(" a is max");
							}
							else{
								printf("h is max");
							}
							
						}
						else{
						   if(g > h){
						   	printf("g is max");
						   }
						   else{
						   	   printf("h is max");
						   }	
						}
						
					}
					else{
						if(f > g){
							if(f > h){
								printf("f is max");
							}
							else{
								printf("g is max");
							}
						}
						else{
							if(e > f){
								if(e > g){
									if(e > h){
										printf("e is max");
									}
									else{
										printf("f is max");
									}
									
								}
								else{
									if(d > e){
										if(d > f){
											if(d > g){
												if(d > h){
													printf("d is max");
												}
												else{
													printf("e is max");
												}
												
											}
											else{
												
											}
											
										}
										else{
											
										}
										
									}
									else{
										
									}
									
								}
								
							}
							else{
							}
							
						}
						
					}
					
				}
				else{
					
				}
				
			}
			else{
				
			}
			
		}
		else{
			
		}
		
		
	}
	else{
		
	}
}
