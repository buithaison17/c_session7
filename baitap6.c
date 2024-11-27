#include<stdio.h>
int main(){
	int numbers[5] = {1, 2, 3, 4, 5}, numbersChange[5];
	for(int i = 0; i < 5; i++){
		if(numbers[i] % 2 == 0){
			numbersChange[i] = numbers[i] + 3;
		}
		else{
			numbersChange[i] = numbers[i] + 2;
		}
	}
	for(int i = 0; i < 5; i++){
		printf("%d\n", numbersChange[i]);
	}
	return 0;
}
