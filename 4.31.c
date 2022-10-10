#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, mid;
	printf("enter odd number for diamond:");
	scanf("%d", &row);
	mid = (row+1)/2;		
	for(int i=1; i<=mid; i++){
		for(int j=1; j<=mid-i; j++)		printf(" ");		
		for(int j=1; j<=i*2-1; j++)		printf("*");
		puts("");
	}
	for(int i=mid-1; i>=1; i--){
		for(int j=1; j<=mid-i; j++)		printf(" ");		
		for(int j=1; j<=i*2-1; j++)		printf("*");
		puts("");
	}
	system("pause");
	return 0;	
}
