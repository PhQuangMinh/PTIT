#include <bits/stdc++.h>
using namespace std;
string chuanTen(string ten)
{
    transform(ten.begin(), ten.end(), ten.begin(), ::tolower);
    stringstream tach(ten);
    vector<string> str;
    string k;
    while (tach >> k)
    {
        k[0] = toupper(k[0]);
        str.push_back(k);
    }
    string ans = "";
    for (auto x : str)
        ans += x + " ";
    return ans;
}
string chuanNS(string ns)
{
    if (ns[1] == '/')
        ns = "0" + ns;
    if (ns[4] == '/')
        ns.insert(3, "0");
    return ns;
}
class SinhVien
{
private:
    string hoTen, tenLop, ngaySinh;
    float gpa;

public:
    friend istream &operator>>(istream &is, SinhVien &sv)
    {
        getline(is, sv.hoTen);
        cin >> sv.tenLop >> sv.ngaySinh >> sv.gpa;
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien &sv)
    {
        sv.hoTen = chuanTen(sv.hoTen);
        sv.ngaySinh = chuanNS(sv.ngaySinh);
        os << "B20DCCN001 " << sv.hoTen << sv.tenLop << " " << sv.ngaySinh << " ";
        os << fixed << setprecision(2) << sv.gpa;
        return os;
    }
};
int main()
{
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
