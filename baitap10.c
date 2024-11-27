#include<stdio.h>
int main(){
	int n, count;
	printf("nhap so phan tu co trong mang: ");
	scanf("%d", &n);
	int numbers[n];
	for(int i = 0; i < n; i++){
		printf("nhap phan tu vao mang: ");
		scanf("%d", &numbers[i]);
	}
	for(int i = 0; i < n; i++){
		count = 0;
		for(int j = 1; j <= numbers[i]; j++){
			if(numbers[i] % j == 0){
				count++;
			}
		}
		if(count == 2){
			printf("so nguyen to trong mang la: %d\n", numbers[i]);
		}	
	}
	return 0; 
}
