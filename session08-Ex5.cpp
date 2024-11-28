#include<stdio.h>

int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	for(int j=0;j<3;j++){
		sum +=arr[0][j];
	}
	for(int j=0;j<3;j++){
		sum +=arr[2][j];
	}
	for(int i=1;i<2;i++){
		sum +=arr[i][0];
	}
	for(int i=1;i<2;i++){
		sum +=arr[i][2];
	}
	printf("Tong cac phan tu tren duong bien cua ma tran la: %d",sum);
	return 0;
}