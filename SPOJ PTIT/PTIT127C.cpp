#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
struct hop{
	int bd, kt;
};
bool cmp(hop a, hop b){
	if (a.kt<b.kt) return true;
	return false;
}
int main(){
	faster();
	int n;
	cin >> n;
	hop a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i].bd >> a[i].kt;
	sort(a+1, a+n+1, cmp);
	int res=1;
	int dem[n+5]={0};
	for (int i=1;i<=n;i++){
		dem[i]=1;
	    for (int j=1;j<i;j++)
	        if (a[j].kt<=a[i].bd && dem[i]<dem[j]+1)
	            dem[i]=dem[j]+1;
	    res=max(res, dem[i]);
	}
	cout << res;
}