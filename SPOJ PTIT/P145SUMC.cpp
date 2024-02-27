#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int main(){
	int a, b;
	cin >> a >> b;
	int uc=ucln(a, b);
	int uoc[10000];
	int dem=0;
	for (int i=1;i*i<=uc;i++)
	    if (uc%i==0){
	    	if (i*i==uc) uoc[++dem]=i;
	    	else{
	    		uoc[++dem]=i;
	    		uoc[++dem]=uc/i;
			}
		}
	sort(uoc+1, uoc+dem+1, cmp);
	int m;
	cin >> m;
	for (int i=1;i<=m;i++){
		int l, r;
		cin >> l >> r;
		if (l>r) swap(l, r);
		int res=-1;
		for (int i=dem;i>=1;i--)
		    if (uoc[i]>=l && uoc[i]<=r){
		    	res=uoc[i];
		    	break;
			}
		cout << res << "\n";
	}
} 