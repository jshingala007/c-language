#include <stdio.h>

void main()
{
    int x, y;
    
    x=5;
    y=3;
    
    
    printf("Sum of %d + %d = %d",x,y,x+y);

 
   printf("\nMultiplication of %d * %d = %d",x,y,x*y);

  
   printf("\nDivision of  %d / %d = %.2f",x,y,(float)x/y);


   printf("\nSubtraction of %d - %d = %d\n",x,y,x-y);

  
   printf("Modulo of %d %% %d = %d",x,y,x%y);
}
