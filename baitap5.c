#include<stdio.h>
int main(){
	int numbers[5] = {10, 2, 3, 100, 5}, max, min;
	max = numbers[0], min = numbers[0];
	for(int i = 0; i < 5; i++){
		if(max < numbers[i]){
			max = numbers[i];
		}
		if(min > numbers[i]){
			min = numbers[i];
		}
	}
	printf("so lon nhat trong mang la: %d\n", max);
	printf("so be nhat trong mang la: %d\n", min);
	return 0;	
}
