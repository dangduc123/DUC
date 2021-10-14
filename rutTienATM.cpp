/*mot may ATM co cac loai tien menh
gia 100 USD, 20 USD, 1 USD. Gia su may 
co so tien khong han che.
Mot nguoi rut tien so tien n USD. Hay
viet chuong trinh dieu khien may ATM 
dua ra so tien can rut sao cho so tien it nhat

Vi du: 320 -> Output: 3 to 100 va 1 to 20*/

#include<stdio.h>

int main()
{
	int n,n1;
	int soto100, soto20, soto1;
	do{
		printf("\nNhap vao so tien can rut:");
		scanf("%d",&n);
		if(n <= 0)
		{
			printf("\nXin moi ban nhap lai cho dung");
		}
	}while(n<=0);
	n1 = n;//in lai gia tri ban dau
	soto100 = n/100;//chi hang ch
	n=n%100;
	soto20 = n/20;
	n=n%20;
	soto1 = n;
	//in ra ket qua 
	printf("\nSo tien rut la:%d",n1);
	printf("\nSo to 100 USD la:%d",soto100);
	printf("\nSo to 20 USD la:%d",soto20);
	printf("\nSo to 1 USD la:%d",soto1);
}


	
