/*Tim va in ra man hinh cac so nguyen
 trong pham vi tu 10 den 99 sao cho tích 
 cua 2 chu so = 2 lan tong cua 2 chu so do*/
 
#include<stdio.h>

int main()
{
	for(int i = 10;i <= 99;i++)
	{
		int donvi = i % 10;//chia hang don vi
		int chuc = i / 10;//chia hang chuc
		if(donvi * chuc == 2 * (donvi + chuc))
			printf("%d \n",i);
	}
}

