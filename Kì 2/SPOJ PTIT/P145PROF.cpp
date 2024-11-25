#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct kh{
	int h, mi;
};
bool cmp(kh a, kh b){
	if (a.h<b.h || a.h==b.h && a.mi<b.mi) return 1;
    return 0;
}
int main(){
	faster();
    int n; 
    cin >> n;
    kh a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i].h >> a[i].mi;
    sort(a+1, a+n+1, cmp);
    int max=0;
    int d=1;
    a[n+1].h=-1;
    a[n+1].mi=-1;
    for (int i=1;i<=n;i++)
        if (a[i].h==a[i+1].h && a[i].mi==a[i+1].mi) d++;
        else{
        	if (d>max) max=d;
        	d=1;
		}
	cout << max;
}