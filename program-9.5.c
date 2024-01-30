#include<stdio.h>

main()
{
	int i ,n;
	
	printf("Enter the First Number : ");
	scanf("%d",&i);
	
	printf("Enter the Second Number : ");
	scanf("%d",&n);
	
	while(i <= n){
		
		if(i % 4 == 0){
			
			printf("%d ",i);
		
		}
		i++;
	}
	
}
