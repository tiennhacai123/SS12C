#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,m;
	printf("Nhap vao so dong cua mang 2 chieu n:");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang 2 chieu m:");
	scanf("%d",&m);
	int numbers[n][m];
	int sumnumbers;
	int count;
	do{
		printf("\n**********MENU**********\n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. Tinh so luong phan tu chia het cho 2 va 3 trong mang\n");
		printf("4. In cac phan tu va tong cac phan tu nam tren duong bien duong cheo chinh va duong cheo phu\n");
		printf("5. Su dung thuat toan lua chon sap sep cac phan tu tang dan theo cot cua mang\n");
		printf("6. In ra cac phan tu la so nguyen to trong mang\n");
		printf("7. Su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang giam gian\n");
		printf("8. Nhap gia tri cua mang mot chieu gom m phan tu va chi so dong muon chen vao mang thuc hien chen vao mang hai chieu\n");
		printf("9. Thoat\n"); 
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap gia tri cac phan tu cua mang \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("number[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}				 
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang la:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				printf("\n");
			    break;
			case 3:
				sumnumbers=0;
				printf("Cac phan tu chia het cho 2 va 3 la:");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(numbers[i][j]%2==0&&numbers[i][j]%3==0){
							printf("%d\t",numbers[i][j]);
							sumnumbers+=numbers[i][j];
						}
					}
				}
				printf("Cac so chia het cho 2 va 3 la: %d\n",sumnumbers);
			    break;
			case 4:
				printf("Cac phan tu nam tren duong bien la:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0 || i==n-1 || j==0 || j==m-1 ){
							printf("%d\t",numbers[i][j]);
						}
					}
				}
				printf("\ncac phan tu nam tren duong cheo chinh la:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==j){
							printf("%d\t",numbers[i][j]);
						}
					}
				}
				printf("\ncac phan tu nam tren duong cheo phu la:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i+j==n-1){
							printf("%d\t,",numbers[i][j]);
						}
					}
				}
			    break;
			case 5:
			    break;
			case 6:
				printf("cac so ngto trong mang la:\n");
        	for(int i=0;i < n;i++){
					for(int j=0;j < m;j++){
					count=0;
					for(int k=2;k<numbers[i][j];k++){
						if(numbers[i][j] % k == 0){
							count=1;
							break;
						}
					}
						if(count == 0 && numbers[i][j] >=2){
						printf("%d",numbers[i][j]);
						}	
				}
			}
				break;
			case 7:
			    break;
			case 8:
			    break ;
			case 9:
			    exit(0);
		    default:
			    printf("Vui long nhap tu 1-9");
	    }
	}while(1==1); 
} 