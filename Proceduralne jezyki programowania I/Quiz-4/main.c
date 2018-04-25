#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
	if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}else{
		return (fibo(n-2)+fibo(n-1));
	}
}

int main() {
	int i = 0;
	int a;
	printf("Give number: ");
	scanf("%d", &a);
	
	for(;i<=a;i++)
	{
		printf("Fibo %d: %d\n",i,fibo(i));		
	}
	return 0;
}
