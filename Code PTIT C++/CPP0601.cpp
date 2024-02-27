#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string hoTen, tenLop, ngaySinh;
        float gpa;
    public:
        void nhap(){
            getline(cin, hoTen);
            cin >> tenLop >> ngaySinh >> gpa;
        }
        string chuanHoa(string s){
            if (s[1]=='/') s.insert(s.begin(), '0');
            if (s[4]=='/') s.insert(s.begin()+3, '0');
            while (s.size()<10) s.insert(s.begin()+6, '0');
            return s;
        }
        void xuat(){
            ngaySinh = chuanHoa(ngaySinh);
            cout << "B20DCCN001 " << hoTen << " " << tenLop << " " << ngaySinh << " " << fixed << setprecision(2) << gpa;
        }
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
