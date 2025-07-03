#include <stdio.h>
int isPrime (int n){
	if (n<=1){
		return 0;
	}
	if(n == 2){
		return 1;
	}
	if (n%2 == 0){
		return 0;
	}
	
	for(int i =3; i*i <= n;i +=2){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int x;
	do{
		printf("Please enter a positive integer:");
		scanf("%d",&x);	
	if( x <= 0){
		printf("Please try again!\n");
	}
	}while ( x < 0);

	
	if(isPrime(x)){
		printf("%d is a prime number.\n",x);
	}else{
		printf("%d is not a prime number.\n",x);
	}
	return 0;
}
