#include <stdio.h>
#include <stdlib.h>

int main()
{
	for(int i=1; i<=10; i++){		
		for(int j=1; j<=10; j++){
			(j<=i)? 
				printf("%s", "*"):
				printf("%s", " ");
		}
		printf("\n");
	}
	printf("\n");
//111111111111111111111111111111111111111
	for(int i=1; i<=10; i++){		
		for(int j=10; j>=1; j--){
			(j>=i)? 
				printf("%s", "*"):
				printf("%s", " ");
		}
		printf("\n");
	}
	printf("\n");
//222222222222222222222222222222222222222	
	for(int i=1; i<=10; i++){		
		for(int j=1; j<=10; j++){ 
			(j>i)?
				printf("%s", "*"):
				printf("%s", " ");	
		}
		printf("\n");
	}
//333333333333333333333333333333333333333
	for(int i=1; i<=10; i++){		
		for(int j=10; j>=1; j--){
			(j>=i)? 
				printf("%s", " "):
				printf("%s", "*");
		}
		printf("\n");
	}
//444444444444444444444444444444444444444
	printf("\n\n");

	system("pause");
	return 0;	
}
	
