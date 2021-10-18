using System;

namespace dssv
{

    class SinhVien // details of student with simple input/output methods
    {
        private string ten;
        private float dtb;
        public string Ten
        {
            get => ten; set => ten = value;
        }
        public float DTB
        {
            get => dtb;set => dtb = value;
        }

        public void NhapSV()
        {
            Console.WriteLine("Nhap ho ten sinh vien");
            string ten = Console.ReadLine();
            Console.Write("Nhap diem trung binh: ");
            dtb = float.Parse(Console.ReadLine());
        }

        public void XuatSV()
        {
            Console.WriteLine("Ten sinh vien: {0}", ten);
            Console.WriteLine("Diem trung binh: {0}", dtb);
            Console.WriteLine("\n--------------------------");
        }
    }

    class Mang // một mảng các đối tượng sinh viên
    {
        SinhVien[] a;
        int n;

        public Mang() // hàm khởi tạo
        { a = new SinhVien[100]; }

        public void NhapMang()
        {
            Console.WriteLine("Nhap so sv");
            n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Nhap chi tiet sinh vien thu {0}", i + 1);
                a[i] = new SinhVien();
                a[i].NhapSV();
            }
        }

        public void XuatMang()
        {
            for (int i = 0; i < n; i++) a[i].XuatSV();
        }
        public void sapXep()
        {
            for(int i = 0; i< n-1;i++)
            {
                for(int j = i + 1;j<n;j++)
                {
                    if(a[i].DTB > a[j].DTB)
                    {
                        SinhVien temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }    
                }    
            }    
        }

    }

    class ChuongTrinh
    {
        static void Main(string[] args)
        {
            Mang a = new Mang();
            a.NhapMang();
            a.XuatMang();
            a.sapXep();
            Console.WriteLine("\nSau khi sap xep tang dan la:");
            a.XuatMang();
        }
    }
}
