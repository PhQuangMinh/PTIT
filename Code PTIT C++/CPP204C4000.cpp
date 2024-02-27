#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name, lop, namsinh;
    float diem;
};
void nhapThongTinSV(SinhVien &a){
    getline(cin, a.name);
    cin >> a.lop >> a.namsinh >> a.diem;
}
void inThongTinSV(SinhVien a){
    string tmp=a.namsinh;
    if (tmp[1]=='/') tmp="0"+tmp;
    if (tmp[4]=='/') tmp.insert(3, "0");
    cout << "N20DCCN001 " << a.name << " " << a.lop << " " << tmp << " " << fixed << setprecision(2) << a.diem;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}