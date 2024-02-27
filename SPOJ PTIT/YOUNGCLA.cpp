#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
struct nguoi{
	string ten;
	int ngay, thang, nam;
};
bool cmp(nguoi a, nguoi b){
	if (a.nam>b.nam) return 1;
	if (a.nam==b.nam && a.thang>b.thang) return 1;
	if (a.nam==b.nam && a.thang==b.thang && a.ngay > b.ngay) return 1;
	return 0;
}
int main(){
	faster();
    int n;
    cin >> n;
    nguoi a[1000];
    for (int i=1;i<=n;i++) 
        cin >> a[i].ten >> a[i].ngay >> a[i].thang >> a[i].nam;
    sort(a+1, a+n+1, cmp);
    cout << a[1].ten << "\n" << a[n].ten;
}