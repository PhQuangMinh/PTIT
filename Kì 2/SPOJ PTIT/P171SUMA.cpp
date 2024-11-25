#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct diem{
	int x, y;
};
bool cmp(diem a, diem b){
	if (a.x<b.x || a.x==b.x && a.y<b.y) return 1;
	return 0;
}
void solve(){
	diem a[10];
	for (int i=1;i<=4;i++)
	    cin >> a[i].x >> a[i].y;
	sort(a+1, a+5, cmp);
    int ok=0;
    if (a[1].x==a[2].x && a[3].x==a[4].x && a[1].x!=a[3].x){
    	if (a[1].y==a[3].y && a[2].y==a[4].y && a[1].y!=a[2].y)
    	    ok=1;
	}
	if (ok) cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 