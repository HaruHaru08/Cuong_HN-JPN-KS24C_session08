#include<stdio.h>

int main(){
	int arr[2][3]={{1,2,3},{7,8,9}};
	int maxarr=arr[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]>maxarr){
				maxarr=arr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la: %d ",maxarr);
	return 0;
}