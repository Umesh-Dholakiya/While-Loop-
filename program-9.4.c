#include<stdio.h>

main(){

	int i;
	
	printf("Enter the any Number : ");
	scanf("%d", &i);

	while(i >= 1){

		if(i % 2 == 1){
			
			printf("%d ",i);	
			
		}
		i--;
	}

}
