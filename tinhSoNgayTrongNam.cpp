#include<stdio.h>

int main()
{
	unsigned char month;
//	
	printf("Nhap thang duong lich:");
	scanf("%d",&month);
//	
//	if(month == 1||month==3||month == 5||month == 7||month == 8||month == 10|| month==12)
//		printf("\nThang %d co 31 ngay\n", month);
//
//	if(month == 4||month==6||month == 9||month == 11)
//		printf("\nThang %d co 31 ngay\n", month);
//	if(month==2)
//	{
//		int year;
//		printf("\nXin nhap nam:");
//		scanf("%d",&year);
//		if((year % 400 == 0||(year % 4 == 0)&& year % 100 !=0))
//			printf("\nThang %d cho 29 ngay",month);
//		else
//			printf("\nThang %d co 28 ngay",month);
//	}	
//	if(month<1||month>12)
//	{
//		printf("\nBan da nhap sai! xin ban nhap lai");
//	}
//	


	switch(month)
	{
		case 1: 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("\nThang %d co 31 ngay",month);break;
		case 4: 
		case 6:
		case 9:
		case 11:printf("\nThang %d co 30 ngay",month);break;
		case 2:
			{
			int year;
			printf("\nXin nhap nam:");
			scanf("%d",&year);
			if((year % 400 == 0||(year % 4 == 0)&& year % 100 !=0))
				printf("\nThang %d cho 29 ngay",month);
			else
				printf("\nThang %d co 28 ngay",month);
			break;
			}
	default:
		printf("\nKhong co thang %d",month);	
	}
			
}


