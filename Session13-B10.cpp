#include<stdio.h>
// khai bao ham nhap gia tri trong ham
void addItem(int arr[100],int size){
	for (int i=0;i<size;i++){
		printf("phan tu thu arr[%d]=",i);
		scanf("%d",&arr[i]);
		}
	}

// khai bao ham 
void printfItem(int arr[100], int size){
	for(int i =0; i< size;i++){
		printf("phan tu thu arr[%d]co gia tri la %d\n",i,arr[i]);
	}
}
void themViTri(int arr[100], int size,int them,int viTri,int nhapKyTu){
			for(int i=size;i>viTri;i--){
					arr[i]=arr[i-1];
				}
				arr[viTri]=nhapKyTu;
				for(int i=0;i<size+1;i++){
					printf(" %d ",arr[i]);
				}
} 
void SuaViTri(int arr[100], int size,int sua,int viTri,int nhapKyTu){
		arr[viTri]=nhapKyTu;
				for(int i=0;i<size+1;i++){
				printf(" %d ",arr[i]);
				}
}
void SuaViTri(int arr[100], int size,int xoa,int viTri){
		for(int i=viTri;i<size;i++){
				arr[i]=arr[i+1];
				}
				for(int i=0;i<size-1;i++){
					printf(" %d ",arr[i]);
				}
}
	int main(){
	//
	int arr[100];
	int size;
	int them,xoa,sua,viTri,nhapKyTu; 
	int start;
do{
		
		printf("________________menu__________________\n");
		printf("1.Nhap so luong cac phan tu va gia tri\n");
		printf("2.In ra cac phan tu trong mang dang quan ly\n");
		printf("3.Them mot phan tu vao vi tri chi dinh\n");
		printf("4.Sua mot phan tu o vi tri chi dinh\n");
		printf("5.xoa mot phan tu o vi tri chi dinh \n");
		printf("6.sap xep cac phan tu\n");
				printf("a.giam dan \n");
				printf("b.tang dan\n");
		printf("7.tim kiem phan tu nhap vap\n");
					printf("a.Tim kiem tinh\n");
					printf("b.tim kiem nhi phan\n");
		printf("8.THoat\n");
		printf("Moi ban nhap lua chon");
		scanf("%d",&start);
		switch(start){
			case 1:// nhap phan tu 
			//	printf("Ban vau chon case1\n");
				printf("MOI ban nhap so phan tu\n");
				scanf("%d",&size);
				addItem(arr,size);
				break;
			case 2:
				// in ra cac phan tu trong mang
				 
				printfItem(arr,size);
				break;
			case 3:// themm vi tri
					printf("ban muon them phan tu la:");
					scanf("%d",&nhapKyTu);
					printf("vi tri ban muon them");
					scanf("%d",&viTri); 
					themViTri(arr,size,them,viTri,nhapKyTu);
				break;
			case 4:// sau vi tri
					printf("ban muon sua phan tu la:");
					scanf("%d",&nhapKyTu);
					printf("vi tri ban muon sua");
					scanf("%d",&viTri); 
					SuaViTri(arr,size,sua,viTri,nhapKyTu);
				break;
			case 5:
				printf("vi tri ban muon xoa");
					scanf("%d",&viTri); 
					SuaViTri( arr, size,xoa,viTri);
				break;
			case 6:
				break;
			case 7:
				break;
			default:
				break;
		}
}while(start !=8);
	return 0;
}
