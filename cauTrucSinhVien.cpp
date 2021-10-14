#include<stdio.h>
#include<string.h>

struct sinhVien
{
	int maSo;
	char hoTen[15];
	int namSinh;
	float dtb;
};
typedef struct sinhVien SINHVIEN;
// Ham nhap thong tin mot sinh vien
void NhapThongTin(SINHVIEN &x)
{
	printf("\nNhap ma so sinh vien:");
	scanf("%d",&x.maSo);
	fflush(stdin);
	printf("\nNhap ho ten sinh vien:");
	gets(x.hoTen);
	printf("\nNhap nam sinh cua sinh vien:");
	scanf("%d",&x.namSinh);
	printf("\nNhap diem trung binh cua sinh vien:");
	scanf("%f",&x.dtb);
}

// Ham xuat thong tin mot sinh vien
void XuatThongTin(SINHVIEN x)
{
	printf("\nMa so sinh vien:%d",x.maSo);
	printf("\nHo ten sinh vien:%s",x.hoTen);
	printf("\nNam sinh sinh vien:%d",x.namSinh);
	printf("\nDiem trung binh sinh vien:%f",x.dtb);
}

// Ham nhap nhieu sinh vien --> Nhap danh sach sinh vien
void NhapDSSV(SINHVIEN a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t\tNHAP THONG TIN SINH VIEN THU %d",i + 1);
		NhapThongTin(a[i]);
	}
}

// Ham xuat nhieu sinh vien --> Xuat danh sach sinh vien
void XuatDSSV(SINHVIEN a[], int n)
{
	for(int i = 0;i<n;i++)
	{
		printf("\n\n\t\tXUAT THONG TIN SINH VIEN THU %d",i+1);
		XuatThongTin(a[i]);
	}
}

// Ham tim kiem thong tin sinh vien thong qua ma so sinh vien
void timKiemSinhVien(SINHVIEN a[],int n, int mssv)
{
	int dem = 1;
	for(int i = 0;i<n;i++)
	{
		if(a[i].maSo==mssv)
		{
			printf("\n\n\t\t THONG TIN SINH VIEN THU %d",dem++);
			XuatThongTin(a[i]);
		}
	}
}

// Ham them sinh vien vao mot vi tri bat ky
void themSinhVien(SINHVIEN a[], int &n, int vt, SINHVIEN x)
{
	for(int i = n - 1;i >= vt; i--)
	{
		a[i + 1] = a[i];
	}
	a[vt] = x;
	n++;
}

// Xoa sinh vien 
void xoaSinhVien(SINHVIEN a[], int &n, int vtXoa)
{
	for(int i = vtXoa + 1; i < n; i++)
	{
		a[i - 1]=a[i];
	}
	n--;
}
// Ham hoan vi
void HoanVi(SINHVIEN &a,SINHVIEN &b)
{
		SINHVIEN temp = a;
		a = b;
		b = temp;
}

// Ham sap xep danh sach sinh vien tang dan theo diem trung binh
void sapXepTangDanDTB(SINHVIEN a[],int n)
{
	for(int i =0 ;i<n-1;i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i].dtb > a[j].dtb)
			{
				HoanVi(a[i],a[j]);
			}
		}
	}
}
				


int main()
{
	SINHVIEN a[100];// khai bao mang 1 chieu chua nhieu sinh vien
	int n;
	printf("\nNhap vao so luong sinh vien:");
	scanf("%d",&n);
	printf("\n\n\t\t\tNHAP DANH SACH SINH VIEN\n");
	NhapDSSV(a,n);
	printf("\n\n\t\t\tXUAT DANH SACH SINH VIEN\n");
	XuatDSSV(a,n);
	int mssv;
	printf("\n");
	printf("\nNhap ma so sinh vien can tim kiem:");
	scanf("%d",&mssv);
	timKiemSinhVien(a,n,mssv);
	int vt;
	SINHVIEN x;
	printf("\nNhap vi tri can them:");
	scanf("%d",&vt);
	printf("\n\n\t\tNHAP THONG TIN SINH VIEN CAN THEM\n");
	NhapThongTin(x);
	themSinhVien(a,n,vt,x);
	printf("\n\n\t\tXUAT DANH SACH SINH VIEN SAU KHI THEM\n");
	XuatDSSV(a,n);
	int vtXoa;
	printf("\nNhap vao vi tri can xoa:");
	scanf("%d",&vtXoa);
	xoaSinhVien(a,n,vtXoa);
	printf("\n\n\t\tXUAT DANH SACH SINH VIEN SAU KHI XOA\n");
	XuatDSSV(a,n);
	sapXepTangDanDTB(a,n);
	printf("\n\n\t\tXUAT DANH SACH SINH VIEN SAU KHI SAP XEP TANG DAN THEO DIEM TRUNG BINH\n");
	XuatDSSV(a,n);
}
