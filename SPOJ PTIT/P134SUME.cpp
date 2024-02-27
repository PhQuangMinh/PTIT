#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return true;
	return false;
}
int main(){
	faster();
    int a[5];
    for (int i=1;i<=4;i++) cin >> a[i];
    sort(a+1, a+5, cmp);
    int kq=(min(a[1], a[2])*min(a[3], a[4]));
    if ((min(a[1], a[3])*min(a[2], a[4]))>kq)
        kq=min(a[1], a[3])*min(a[2], a[4]);
    cout << kq;
}
 