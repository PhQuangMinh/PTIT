#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
struct ts{
	string ten;
	int b1, t1, b2, t2, b3, t3, b4, t4;
	int sumtime, sumbai;
};
bool cmp(ts a, ts b){
	if (a.sumbai>b.sumbai || a.sumbai==b.sumbai && a.sumtime<b.sumtime) return true;
	return false;
}
int main(){
	faster();
	int n;
	cin >> n;
	int max=0;
	int dmax=0;
	ts a[5];
	for (int i=1;i<=4;i++){
		cin >> a[i].ten >> a[i].b1 >> a[i].t1 >> a[i].b2 >> a[i].t2 >> a[i].b3 >> a[i].t3 >> a[i].b4 >> a[i].t4;
		a[i].sumbai=0;
		a[i].sumtime=0;
		if (a[i].t1>0){
			a[i].sumbai++;
			a[i].sumtime+=a[i].t1+(a[i].b1-1)*20;
		}
		if (a[i].t2>0){
			a[i].sumbai++;
			a[i].sumtime+=a[i].t2+(a[i].b2-1)*20;
		}
		if (a[i].t3>0){
			a[i].sumbai++;
			a[i].sumtime+=a[i].t3+(a[i].b3-1)*20;
		}
		if (a[i].t4>0){
			a[i].sumbai++;
			a[i].sumtime+=a[i].t4+(a[i].b4-1)*20;
		}
	}
	sort(a+1, a+5, cmp);
	cout << a[1].ten << " " << a[1].sumbai << " " << a[1].sumtime;
}