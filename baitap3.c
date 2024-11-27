#include<stdio.h>
int main(){
	int number[5] = {3, 1, 5, 7, 9}, count = 0;
	for(int i = 0; i < 5; i++){
		if(number[i] % 2 == 0){
			count++;
			printf("%d\n", number[i]);
		}
	}
	if(count == 0){
		printf("khong co so chan");
	}
	return 0;
}
