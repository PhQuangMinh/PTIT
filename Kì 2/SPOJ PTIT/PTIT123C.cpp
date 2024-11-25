#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct ck{
	int id;
	int gia;
};
int cmp (ck a, ck b){
	if (a.gia>b.gia || a.gia==b.gia && a.id>b.id) return 0;
	return 1;
}
int cmp2 (ck a, ck b){
	if (a.id>b.id) return 0;
	return 1;
}
int cmp3 (ck a, ck b){
	if (a.id<b.id) return 0;
	return 1;
}
ck a[1000000];
int main(){
	faster();
	int n, k1, k2;
	int t=0;
	cin >> n >> k1 >> k2;
	while (n!=0 || k1!=0 || k2!=0){
		t++;
		for (int i=1; i<=n; i++){
			cin >> a[i].gia;
			a[i].id=i;
		}
		sort (a+1, a+n+1, cmp);
		sort (a+1, a+k1+1, cmp2);
		sort (a+(n-k2)+1, a+n+1, cmp3);
		cout << "Case " << t << "\n";
		for (int i=1; i<=k1; i++)
		    cout << a[i].id <<" ";
		cout << "\n";
		for (int i=n-k2+1; i<=n; i++)
			cout << a[i].id << " ";
		cout << "\n";
		cin >> n >> k1 >> k2;
	}
}