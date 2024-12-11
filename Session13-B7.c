#include<stdio.h>
	void taoMaTran(int x,int y ,int arr[100][100]){
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				printf("nhap phan tu cua array[%d][%d]=\n",i+1,j+1);
				scanf("%d",&arr[i][j]); 
			} 
		} 
	} 
	void inMaTran(int x,int y, int arr[100][100]){
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				printf("%d",arr[i][j]);
			}
			printf("\n");
		}
	}

int main(){

	int x,y;
	printf("moi ban nhap hang va cot");
	scanf("%d",&x);
	printf("moi ban nhap hang va cot");
	scanf("%d",&y);
		int arr[100][100];
	
	taoMaTran(x,y,arr);
	inMaTran(x,y,arr);
	return 0; 
} 
