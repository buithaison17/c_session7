#include<stdio.h>
int main(){
	int row, col;
	printf("vui long nhap so hang: ");
	scanf("%d", &row);
	printf("vui long nhap so cot: ");
	scanf("%d", &col);
	int numbers[row][col];
	for(int i = 0 ; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("moi ban nhap phan tu numbers[%d][%d]: ", i, j);
			scanf("%d", &numbers[i][j]);
		}
	}
	printf("\ncac phan tu trong mang la:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
	return 0;
}

