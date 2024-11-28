#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int number,check = 0;
	printf("Nhap mot so bat ky: ");
	scanf("%d",&number);
	for(int i=0;i<5;i++){
		if(number==arr[i]){
			printf("Vi tri phan tu trong mang la: %d\n",i);
			check=1;
			break;
		}
	}
		if(check==0){
			printf("Phan tu khong nam trong mang");
		}	
	return 0;
}