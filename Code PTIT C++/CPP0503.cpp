#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long x, y;
};
long long ucln(long long a, long long b){
    long long t=b%a;
    while (t!=0){
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}
void nhap(PhanSo &p){
    cin >> p.x >> p.y;
}
void rutgon(PhanSo &p){
    long long uc=ucln(p.x, p.y);
    p.x/=uc;
    p.y/=uc;
}
void in(PhanSo p){
    if (p.y==1) cout << p.x;
    else cout << p.x << "/" << p.y;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}