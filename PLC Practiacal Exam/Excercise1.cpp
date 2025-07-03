#include <stdio.h>
int main(){
	int n, sum = 0, i= 1;
	
	do{
		printf("Please enter a positive integer:");
		scanf("%d",&n);	
		
	if(n < 0){
		printf("Please enter again!\n");
	}
	}while (n <0);
	
	while(i<= n){
		sum += i;
		i++;
	}
	printf("The sum of intergers from 1 to %d: %d\n",n,sum);
}
