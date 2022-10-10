#include <stdio.h>
#include <stdlib.h>

int main()
{
	float prin, rate, term, interest;
	
	while(1){
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &prin);
		if(prin==-1)	break;
		printf("Enter interesr rate: ");
		scanf("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("%f", &term);
				
		printf("The interest charge is $%.2f\n\n", prin*rate*term/365);
	}
	system("pause");
	return 0;	
}
	
