#include <stdio.h>
#include <stdlib.h>

int main()
{
	float dollars=0;
	
	while(1){
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &dollars);
		if(dollars==-1)	break;		
		printf("Salary is: $%.2f\n", dollars*0.09+200);
	}
	system("pause");
	return 0;	
}
	
