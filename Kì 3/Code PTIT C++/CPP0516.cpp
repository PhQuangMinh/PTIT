#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct MatHang{
    int ma;
    string ten, nhom;
    string mua, ban;
    float ln;
};
void nhap(MatHang a[], int n){
    for (int i=0;i<n;i++){
        a[i].ma = i+1;
        getline(cin, a[i].ten);
        getline(cin, a[i].nhom);
        getline(cin, a[i].mua);
        getline(cin, a[i].ban);
        float mua = stof(a[i].mua);
        float ban = stof(a[i].ban);
        a[i].ln = ban-mua;
    }
}
bool cmp(MatHang a, MatHang b){
    return a.ln>b.ln;
}
void in(MatHang a[], int n){
    sort(a, a+n, cmp);
    for (int i=0;i<n;i++){
        cout << a[i].ma <<" " <<  a[i].ten << " " << a[i].nhom << " " << fixed << setprecision(2) << a[i].ln;
        if (i!=n-1) cout << "\n";
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
    int n;
    string tmp;
    getline(cin, tmp);
    n = stoi(tmp);
    MatHang a[n+5];
    nhap(a, n);
    in(a, n);
    return 0;
}