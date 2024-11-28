#include<stdio.h>

int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	for(int i=0;i<3;i++){
		sum +=arr[i][i];
		for(int j=0;j<3;j++){
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	printf("Tong cac phan tu tren duong cheo chinh cu ma tran la: %d",sum);
	return 0;
}