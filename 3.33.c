#include <stdio.h>
#include <stdlib.h>

int main()
{
	int length=10, breadth=10;
	printf("Enter length:\t");
	scanf("%d", &length);
	printf("Enter breadth:\t");
	scanf("%d", &breadth);
	for(int i=0; i<length; i++){
		for(int j=0; j<breadth; j++){
			if((j==0)||(j==breadth-1)||(i==0)||(i==length-1)){
				printf("+");
			}			
			else{
				printf(" ");
			}		
		}
		printf("\n");
	}
	system("pause");
	return 0;	
}
	
