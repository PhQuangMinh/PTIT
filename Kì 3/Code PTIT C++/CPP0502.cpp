#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name, ngay;
    float mon1, mon2, mon3;
};
void nhap(ThiSinh &x){
    getline(cin, x.name);
    cin >> x.ngay >> x.mon1 >> x.mon2 >> x.mon3;

}
void in(ThiSinh x){
    cout << x.name << " " << x.ngay << " " << fixed << setprecision(1) << x.mon1 + x.mon2 + x.mon3;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}