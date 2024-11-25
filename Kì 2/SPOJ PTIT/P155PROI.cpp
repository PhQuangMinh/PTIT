#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct bia{
	int chai, mo, id;
};
int main(){
	faster();
	int n;
	cin >> n;
	bia a[n+5];
    for (int i=1;i<=n;i++){
    	cin >> a[i].mo >> a[i].chai;
    	a[i].id=0;
	}
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
	        if (i!=j && a[i].mo==a[j].chai)
	            a[i].id=1;
	int res=0;
	for (int i=1;i<=n;i++)
	     if (a[i].id==0) res++;
	cout << res;
} 