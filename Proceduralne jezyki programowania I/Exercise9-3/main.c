#include <stdio.h>
#include <stdlib.h>

void print_data(int * ptr, int size){
	int i = 0;
	for(;i<size;i++){
		printf("%d\n",ptr[i]);
	}
	printf("___________\n");
}

int main() {
	int size=6,b=0,tab[size],i=0,j=0;
	for(;b<size; b++){
		printf("Podaje %d liczbe: ", b+1);
		scanf("%d", &tab[b]);
	}
	
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(tab[i]>tab[j]){
				int a = tab[i];
				tab[i] = tab[j];
				tab[j] = a;
			}
		}
	}

	print_data(tab, size);
	return 0;
}
