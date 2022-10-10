#include <stdio.h>
#include <stdlib.h>

int main()
{
	float account, balance, charges, credits, limit;
	
	
	while(1){
		printf("Enter account number(-1 to end):");
		scanf("%f", &account);
		if(account==-1)	break;
		printf("Enter beginning balance:");
		scanf("%f", &balance);
		printf("Enter total charges:");
		scanf("%f", &charges);
		printf("Enter total credits:");
		scanf("%f", &credits);
		printf("Enter credit limit:");
		scanf("%f", &limit);
	
		balance = balance+charges-credits;
		printf("Account:\t%.2f\n", account);
		printf("Credit limit:\t%.2f\n", limit);
		printf("Balance:\t%.2f\n", balance);
		(balance > limit)?
			printf("Credit Limit Exceeded\n"):
			printf("Credit Limit not Exceeded\n");
		
		printf("\n");
	}
	system("pause");
	return 0;	
}
	
