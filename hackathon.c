#include<stdio.h>
int main(){
	int a;
	int choose;
	int check=-1;
	int arr[100];
	int number;
	do{
		printf("MENU\n");
		printf("1.Nhap so phan tu va gia tri cua mang\n");
		printf("2.in ra cac gia tri cua mang\n");
		printf("3.dem so luong so hoan hao co trong mang\n");
		printf("4.tim gia tri nho thu 2 trong mang\n");
		printf("5.them 1 phan tu vao vi tri dau tien trong mang\n");
		printf("6.xoa 1 phan tu tai vi tri cu the\n");
		printf("7.sap xep mang theo thu tu giam dan\n");
		printf("8.cho nguoi dung nhap vao 1 phan tu xem co ton tai ko\n");
		printf("9.sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, chan dung sau\n");
		printf("10.dao nguoc thu tu cua cac phan tu trong mang va hien thi ra toan bo phan tu co trong mang\n");
		printf("11.Thoat chuong trinh\n");
		printf("lua chon cua ban: ");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				printf("nhap so phan tu co trong mang: ");
				scanf("%d",&a);
				while(a<=0){
					printf("ko hop le, vui long nhap lai so phan tu trong mang: ");
					scanf("%d",&a);
				}
				check=1;
				arr[a];
				for(int i=0;i<a;i++){
					printf("nhap gia tri arr[%d]=: ",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				if(check!=1){
				printf("mang hien tai chua co phan tu.\n"); 
			}else{
				printf("cac phan tu trong mang hien tai la:");
				for(int i=0;i<a;i++){
					printf("%d ",arr[i]); 
				}
				printf("\n"); 
			} 
				break;
			case 3:
				if(check!=1){
					printf("mang hien tai chua co phan tu\n");
				}else{
					
				}
				break;
			case 4:
				break;
			case 5:
				
				break;
			case 6:
				if(check!=1){
					printf("mang hien tai chua co phan tu\n");
				}else{
					int m;
					printf("nhap vi tri can xoa: ");
	                scanf("%d",&m);
	                while(m>a){
		            printf("nhap lai vi tri can xoa: ");
		            scanf("%d",&m);
                	}
	               for (int i = m - 1; i < a - 1; i++) {
                     arr[i] = arr[i + 1];
                   }
                       a--;
					
				}
				break;
			case 7:
				if(check!=1){
					printf("mang hien tai chua co phan tu\n");
				}else{
					for(int i=0;i<a;i++){
		              int minIndex =i;
		              for(int j=i;j<a;j++){
			            if(arr[j]>arr[minIndex]){
				           minIndex = j;
			    }
		        }
		        if(minIndex!=i){
			      int temp;
			      temp = arr[minIndex];
			      arr[minIndex]=arr[i];
			      arr[i]=temp;
		        }
	            }
				}
				break;
			case 8:
				if(check!=1){
					printf("mang hien tai chua co phan tu\n");
				}else{
					int start =0;
					int end =a;
					int temp;
					printf("nhap gia tri ban muon tim: ");
					scanf("%d",&number);
					for (int i = 0; i < a-1; i++) {
                    for (int j = 0; j < a-i-1; j++) {
                     if (arr[j] > arr[j+1]) {
                       temp = arr[j];
                       arr[j] = arr[j+1];
                    arr[j+1] = temp;
                  }
                }
              }
					while(start<=end){
		               int mid=(start+end)/2;
		               if(arr[mid]==number){
			               printf("gia tri can tim o vi tri: %d\n",mid+1); 
			               break;
		               } else if(arr[mid]>number){
			               end =mid-1;
		               } else if(arr[mid]<number){
			               start =mid+1;
		               }else{
		               	printf("ko thay gia tri can tim\n"); 
					   } 
	                   } 
					}
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				printf("thoat chuong trinh");
				break;
			default:
				printf("ko hop le!!!\n");
		}
	}while(choose!=11);
	return 0;
}
