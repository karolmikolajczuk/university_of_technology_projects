#include <iostream>

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
	printf("Fibo: %d\n", fibo(21));
	return 0;
}
