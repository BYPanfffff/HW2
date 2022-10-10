#include <stdio.h>
#include <stdlib.h>

int main()
{
	float prin=5000; 
	for(float rate=10; rate<=12; rate=rate+0.5){
		
		printf("Rate:%.2f%\n", rate);
		for(int i=1; i<=15; i++){
			if(i==1){
				printf("%d\t\t%.2f\n",i, prin);
			}	
			else{
				printf("%d\t\t%.2f\n", i, prin*(1+rate/100));
				prin = prin*(1+rate/100);
			}	
		} 
		prin=5000;
	}
	
	
	system("pause");
	return 0;	
}
	
