#include <stdio.h>
#include <stdlib.h>

int main()
{
	float hours, rate;
	
	while(1){
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%f", &hours);
		if(hours==-1)	break;
		printf("Enter hourly rate of the wlrker ($00.00): ");
		scanf("%f", &rate);	
		printf("Salary is $%.2f\n\n", hours*rate);
	}
	system("pause");
	return 0;	
}
	
