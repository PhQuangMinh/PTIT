#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string name, gt, ns, diachi, mathue, ngaydk;
};
void nhap(NhanVien &a){
    getline(cin, a.name);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.mathue >> a.ngaydk;
}
string chuan(string tmp){
    if (tmp[1]=='/') tmp="0"+tmp;
    if (tmp[4]=='/') tmp.insert(3, "0");
    return tmp;
}
void in(NhanVien a){
    cout << "00001 " << a.name << " " << a.gt << " " << chuan(a.ns) << " " << a.diachi << " " << a.mathue << " " << chuan(a.ngaydk);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}