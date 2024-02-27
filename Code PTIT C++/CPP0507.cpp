#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long x, y;
};
void nhap(PhanSo &p){
    cin >> p.x >> p.y;
}
long long ucln(long long x, long long y){
    long long t=y%x;
    while (t!=0){
        t=x%y;
        x=y;
        y=t;
    }
    return x;
}
PhanSo tong(PhanSo p, PhanSo q){
    long long tu=p.x*q.y + p.y*q.x;
    long long mau=p.y*q.y;
    long long uc=ucln(tu, mau);
    tu/=uc;
    mau/=uc;
    PhanSo tong;
    tong.x=tu;
    tong.y=mau;
    return tong;
}
void in(PhanSo t){
    cout << t.x << "/" << t.y;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}