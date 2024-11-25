#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class MayTinh
{
protected:
    string maMayTinh;
    string hangSanXuat;
    int namSanXuat;
    double giaBan;

public:
    string getMaMayTinh()
    {
        return maMayTinh;
    }

    string getHangSanXuat()
    {
        return hangSanXuat;
    }

    int getNamSanXuat()
    {
        return namSanXuat;
    }

    double getGiaBan()
    {
        return giaBan;
    }
    void nhapThongTin()
    {
        cout << "Ma may tinh: ";
        cin.ignore();
        getline(cin, maMayTinh);
        cout << "Hang san xuat: ";
        getline(cin, hangSanXuat);
        cout << "Nam san xuat: ";
        cin >> namSanXuat;
        cout << "Giá bán: ";
        cin >> giaBan;
    }
    void hienThiThongTin()
    {
        cout << "Ma may tinh: " << maMayTinh << "\n";
        cout << "Hang san xuat: " << hangSanXuat << "\n";
        cout << "Nam san xuat: " << namSanXuat << '\n';
        cout << "Gia ban: " << giaBan << "\n";
    }
};

class Laptop : public MayTinh
{
private:
    double canNang;
    double doDay;
    double kichThuoc;
    string heDieuHanh;

public:
    void nhapThongTinLapTop()
    {
        nhapThongTin();
        cout << "Can nang: ";
        cin >> canNang;
        cout << "Do Day: ";
        cin >> doDay;
        cout << "Kich thuoc man hinh: ";
        cin >> kichThuoc;
        cout << "He dieu hanh: ";
        cin.ignore();
        getline(cin, heDieuHanh);
    }
    double getCanNang()
    {
        return canNang;
    }

    double getDoDay()
    {
        return doDay;
    }

    double getkichThuoc()
    {
        return kichThuoc;
    }

    string getHeDieuHanh()
    {
        return heDieuHanh;
    }

    void hienThiThongTinLaptop()
    {

        double giaTri = tinhgiaTri();

        hienThiThongTin();

        cout << "Can nang: " << canNang << "\n";
        cout << "Do Day: " << doDay << "\n";
        cout << "Kich thuoc man hinh: " << kichThuoc << "\n";
        cout << "So nam su dung: " << 2023 - namSanXuat << "\n";
        cout << "Gia tri con lai: " << fixed << setprecision(2) << giaTri << "\n";
        cout << "----------------------------------------------";
    }

    double tinhgiaTri()
    {
        int namHienTai = 2023; 
        int nam = namHienTai - namSanXuat;
        double giaTri = 0.0;

        if (heDieuHanh == "Windows")
        {
            giaTri = giaBan - nam * 0.1 * giaBan;
        }
        else
        {
            giaTri = giaBan - nam * 0.05 * giaBan;
        }

        return max(giaTri, 0.0);
    }
};
    bool cmp(Laptop a, Laptop b)
    {
        return (a.getGiaBan() - a.tinhgiaTri()) > (b.getGiaBan() - b.tinhgiaTri());
    }
int n;
vector<Laptop> a;
void nhap()
{
    do
    {
        cout << "Nhap so luong laptop: ";
        cin >> n;
        if (n > 50)
            cout << "Nhap sai! Moi nhap lai!";
    } while (n > 50);

    for (int i = 1; i <= n; i++)
    {
        cout << "Nhap thong tin lap thu " << i << "\n";
        Laptop Laptop;
        Laptop.nhapThongTinLapTop();
        a.push_back(Laptop);
    }
}
void sapXep(){
    sort(a.begin(), a.end(), cmp);
     cout << "Danh sach laptop sau khi sap xep:" << endl;
    for (int i=0;i<a.size();i++)
    {
        a[i].hienThiThongTinLaptop();
        cout << endl;
    }
}
void namSuDung(){
    int namMax = 0;
    for (int i=0;i<a.size();i++)
    {
        int nam = 2023 - a[i].getNamSanXuat();
        namMax = max(namMax, nam);
    }

    cout << "\nLaptop co so nam su dung nhieu nhat:" << endl;
    for (int i=0;i<a.size();i++)
    {
        int nam = 2023 - a[i].getNamSanXuat();
        if (nam == namMax)
        {
            a[i].hienThiThongTinLaptop();
        }
    }
}
int main()
{

    nhap();
    sapXep();
    namSuDung();
    return 0;
}
