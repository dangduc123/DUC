using System;

namespace tinhDienTichCacHinh
{
    class Shape
    {
        protected float dai, rong;
    }

    class hinhChuNhat:Shape
    {
        public void NhapDuLieuCN()
        {
            Console.WriteLine("\nNhap vao chieu dai cua hinh chu nhat:");
            dai = float.Parse(Console.ReadLine());
            Console.WriteLine("\nNhap vao chieu rong cua hinh chu nhat:");
            rong = float.Parse(Console.ReadLine());
        }
        public void XuatDuLieuCN()
        {
            Console.WriteLine("\nChieu dai hinh chu nhat:{0}", dai);
            Console.WriteLine("\nChieu rong hinh chu nhat:{0}", rong);
        }
        public float area()
        {
            Console.WriteLine("\nDien tich hinh chu nhat la:"); return (dai * rong);
        }
    }
    class hinhTamGiac:Shape
    {
        public void NhapDuLieuTG()
        {
            Console.WriteLine("\nNhap vao chieu dai cua hinh tam giac:");
            dai = float.Parse(Console.ReadLine());
            Console.WriteLine("\nNhap vao chieu rong cua hinh tam giac:");
            rong = float.Parse(Console.ReadLine());
        }
        public void XuatDuLieuTG()
        {
            Console.WriteLine("\nChieu dai hinh tam giac:{0}", dai);
            Console.WriteLine("\nChieu rong hinh tam giac:{0}", rong);
        }
        public float area()
        {
            Console.WriteLine("\nDien tich hinh tam giac la:"); return (dai * rong) / 2;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            hinhChuNhat hcn = new hinhChuNhat();
            hinhTamGiac htg = new hinhTamGiac();
            hcn.NhapDuLieuCN();
            hcn.XuatDuLieuCN();
            Console.WriteLine(hcn.area());
            htg.NhapDuLieuTG();
            htg.XuatDuLieuTG();
            Console.WriteLine(htg.area());
            Console.ReadKey();
        
        }
    }
}
