#include<stdio.h>
int main(){
	int n, i = 0;
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int numbers[n];
	while(i < n){
		printf("vui long nhap phan tu cho mang (so le):  ");
		scanf("%d", &numbers[i]);
		if(numbers[i] % 2 != 0){
			i++;
		}
		else{
			printf("day khong phai so le\n");
		}
	}
	printf("cac phan tu trong mang la: \n");
	for(int a = 0; a < n; a++){
		printf("%d\n", numbers[a]);
	}
	
	return 0;
}
