#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct gd{
	string bo, con;
	int id, tuoi;
};
bool cmp(gd a, gd b){
	if (a.tuoi>b.tuoi || a.tuoi==b.tuoi && a.con+b.con<b.con+a.con) return true;
	return false;
}
int d=0;
void solve(){
	int n;
	cin >> n;
	gd a[n+5];
	for (int i=1;i<=n;i++) {
	    cin >> a[i].bo >> a[i].con >> a[i].tuoi;
	    a[i].id=0;
	    if (a[i].bo=="Ted"){
	    	a[i].tuoi=100-a[i].tuoi;
	    	a[i].id=1;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++)
		    if (a[j].id==1 && a[j].con==a[i].bo){
		    	a[i].tuoi=a[j].tuoi-a[i].tuoi;
		    	a[i].id=1;
			}
	}
	d++;
	cout << "DATASET " << d << "\n";
	sort(a+1, a+n+1, cmp);
	for (int i=1;i<=n;i++){
		cout << a[i].con << " " << a[i].tuoi;
		if (i!=n) cout << "\n";
	}
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) cout << "\n";
	}
}