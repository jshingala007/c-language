#include <stdio.h>

struct Students {
    int id;
    char name[60];
    int chem;
    int math;
    int phy;
};
int main() 
{
    int i, n;
    printf("\nnumber of Student => ");
    scanf("%d", &n);

    struct Students stud[n];
    for (i = 0; i < n; i++) 
	{
    	printf("\ndetails = %d\n", i + 1);
    	printf("Roll No = ");
    	scanf("%d", &stud[i].id);
    	printf("Name = ");
    	scanf(" %[^\n]", stud[i].name);
    	printf("Chem = ");
    	scanf("%d", &stud[i].chem);
    	printf("Math = ");
    	scanf("%d", &stud[i].math);
    	printf("Phy => ");
    	scanf("%d", &stud[i].phy);
	}
    printf("\nStudent Result \n\n");
    for (i = 0; i < n; i++) 
	{
        printf("%s", stud[i].name);
        printf(" (%d)\n", stud[i].id);
        printf("Chem = %d\n", stud[i].chem);
        printf("Math = %d\n", stud[i].math);
        printf("Phy = %d\n", stud[i].phy);
        
        int total = (stud[i].chem + stud[i].math + stud[i].phy);
		printf("Total = %d/300\n", total);
    
		float percentage = ((float)(stud[i].chem + stud[i].math + stud[i].phy) / 300) * 100;
		printf("Percentage = %.2f%%\n", percentage);
		printf("\n\n");
    }
}

