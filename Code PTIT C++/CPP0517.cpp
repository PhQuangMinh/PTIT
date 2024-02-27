#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string name, gt, ns, diachi, mathue, ngaydk;
};
void nhap(NhanVien &a){
    cin.ignore();
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
void inds(NhanVien ds[], int n){
    for (int i=0;i<n;i++){
        NhanVien a=ds[i];
        if (i<9) cout << "0000" << i+1 << " ";
        else cout << "000" << i+1 << " ";
        cout << a.name << " " << a.gt << " " << chuan(a.ns) << " " << a.diachi << " " << a.mathue << " " << chuan(a.ngaydk) << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}