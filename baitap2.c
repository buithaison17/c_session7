#include<stdio.h>
int main(){
	int numbers[5], i;
	for(i = 0; i < 5; i++){
		printf("nhap so: ");
		scanf("%d", &numbers[i]);
	}
	for(i = 0; i < 5; i++){
		printf("%d\n", numbers[i]);
	}
	return 0;
}
