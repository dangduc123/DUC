#include<stdio.h>

//int main()
//{
//	float Km;
//	printf("\nNhap vao so Km:");
//	scanf("%f",&Km);
//	float tongtien = 0;
//	
//	if(Km <= 1)
//	{
//		tongtien = Km * 15000;
//	}
//	else// km > 1
//	{
//		if(Km <= 5)
//		{
//			tongtien = 1 * 15000 + (Km - 1) * 13500;
//		}
//		else//km > 5
//		{
//			tongtien = 1 * 15000 + 4 * 13500 + (Km - 5) * 11000;
//			if(Km > 120)
//			{
//				tongtien = tongtien * 0.9;
//			}
//		}
//	}
//	printf("\nTong tien di taxi la:%f",tongtien);
//}



int main()
{
	float quangduong;
	printf("\nNhap quang duong di:");
	scanf("%f", &quangduong);
	float sotien = 0;
	if(quangduong <= 1) 
	{
		sotien = quangduong * 15000;
	}
	else
	{
		if(quangduong <= 5)
		{ 
			sotien = 15000 + (quangduong - 1) * 13500;
		}
		else
		{
			sotien = 1 * 15000 + 4 * 13500 + (quangduong - 5) * 11000;
			if(quangduong > 120)
			{
				sotien = sotien * 0.9;
			}
		}
	}
	printf("\nSo tien la:%f\n", sotien);
}
