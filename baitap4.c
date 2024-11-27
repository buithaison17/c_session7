#include<stdio.h>
int main(){
	int n, i;
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int numbers[n];
	for(i = 0; i < n; i++){
		printf("nhap so: ");
		scanf("%d", &numbers[i]);
	}
	for(i = 0; i < n; i++){
		printf("%d\n", numbers[i]);
	}
	return 0;
}
