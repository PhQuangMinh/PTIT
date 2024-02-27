#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string hoTen, lop, ngaySinh;
        float gpa;
    public:
        friend istream& operator >> (istream &is, SinhVien &sv){
            getline(is, sv.hoTen);
            cin >> sv.lop >> sv.ngaySinh >> sv.gpa;
            string s = sv.ngaySinh;
            if (s[1]=='/') s.insert(s.begin(), '0');
            if (s[4]=='/') s.insert(s.begin()+3, '0');
            sv.ngaySinh = s;
            return is;
        }
        friend ostream& operator<< (ostream &os, SinhVien &sv){
            os << "B20DCCN001 " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " ";
            cout << fixed << setprecision(2) << sv.gpa;
            return os;
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
    cin >> a;
    cout << a;
    return 0;

}