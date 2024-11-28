#include<stdio.h>

int main(){
	int n;
	printf("Nhap mot so nguyen bat ky: ");
	scanf("%d",&n);
	if(n<0){
		printf("So khong hop le.");
		return 1;
	}
	int arr[n][n];
	printf("Nhap cac phan tu cho mang:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	 printf("\nMa tran vuong la:\n");
    for (int i = 0;i<n; i++){
        for (int j = 0;j<n; j++){
            printf("%3d",arr[i][j]); 
        }
        printf("\n");
    }
	return 0;
}