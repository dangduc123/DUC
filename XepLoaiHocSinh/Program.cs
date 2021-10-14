using System;

namespace XepLoaiHocSinh
{
    class HocSinh
    {
        //khai báo thuộc tính
        private string HoTen;
        private int GioiTinh;
        private double DiemToan, DiemLy, DiemHoa;
        //khai báo phương thức
        public void NhapHocSinh()
        {
            Console.WriteLine("\nNhap vao ho ten:");
            HoTen = Console.ReadLine();
            Console.WriteLine("\n--------Nhap vao gioi tinh-------");
            Console.WriteLine("\n1.Nam");
            Console.WriteLine("\n2.Nu");
            Console.WriteLine("\n3.Gay");
            Console.WriteLine("\n4.Les");
            do
            {
                Console.WriteLine("\nNhap vao gioi tinh:");
                GioiTinh = int.Parse(Console.ReadLine());
                if (GioiTinh < 1 || GioiTinh > 4)
                {
                    Console.WriteLine("\nGioi tinh khong hop le! xin kiem tra lai");
                }
            } while (GioiTinh < 1 || GioiTinh > 4);

            do
            {
                Console.WriteLine("\nNhap vao diem toan:");
                DiemToan = double.Parse(Console.ReadLine());
                if (DiemToan < 0 || DiemToan > 10)
                {
                    Console.WriteLine("\nDiem toan khong hop le! xin kiem tra lai");
                }
            } while (DiemToan < 0 || DiemToan > 10);

            do
            {
                Console.WriteLine("\nNhap vao diem ly:");
                DiemLy = double.Parse(Console.ReadLine());
                if (DiemLy < 0 || DiemLy > 10)
                {
                    Console.WriteLine("\nDiem ly khong hop le! xin kiem tra lai");
                }
            } while (DiemLy < 0 || DiemLy > 10);

            do
            {
                Console.WriteLine("\nNhap vao diem hoa:");
                DiemHoa = double.Parse(Console.ReadLine());
                if (DiemHoa < 0 || DiemHoa > 10)
                {
                    Console.WriteLine("\nDiem hoa khong hop le! xin kiem tra lai");
                }
            } while (DiemHoa < 0 || DiemHoa > 10);
        }

        public void XuatHocSinh()
        {
            Console.WriteLine("\nDiem toan: {0}", HoTen);
            Console.WriteLine("\nGioi tinh:");
            if(GioiTinh == 1)
            {
                Console.WriteLine("\nNam");
            }    
            else if(GioiTinh == 2)
            {
                Console.WriteLine("\nNu");
            }    
            else if(GioiTinh == 3)
            {
                Console.WriteLine("\nGay");
            }    
            else
            {
                Console.WriteLine("\nLes");
            }
            Console.WriteLine("\nDiem toan: {0}", DiemToan);
            Console.WriteLine("\nDiem ly: {0}", DiemLy);
            Console.WriteLine("\nDiem Hoa: {0}", DiemHoa);
            Console.WriteLine("\nDiem Trung Binh: {0}", TinhDiemTrungBinh());
        }

        public double TinhDiemTrungBinh()
        {
            return (DiemToan + DiemLy + DiemHoa) / 3;
        }

        public string XepLoaiHocSinh()
        {
            double Dtb = TinhDiemTrungBinh();
            if(Dtb < 2)
            {
                return "Kem";
            }    
            if(Dtb < 5)
            {
                return "Yeu";
            }    
            if(Dtb < 6)
            {
                return "Trung Binh";
            }    
            if(Dtb < 7)
            {
                return "Trung Binh Kha";
            }    
            if(Dtb < 8)
            {
                return "Kha";
            }    
            if(Dtb < 9)
            {
                return "Gioi";
            }
            return "Xuat Sac";
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            HocSinh hs = new HocSinh();
            hs.NhapHocSinh();
            hs.XuatHocSinh();
            Console.WriteLine("\n\nXep loai: {0}", hs.XepLoaiHocSinh());
            Console.ReadKey();
        }
    }
}
