#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct bo{
	int gt, phi;
};
bool cmp (bo a, bo b){
	if (a.gt + a.phi < b.gt + b.phi || a.gt+a.phi==b.gt+b.phi && a.gt/2+a.phi<b.gt/2+b.phi)  return 1;
    return 0;
}
int main(){
	faster();
    int n; 
    long long k;
    cin >> n >> k;
    bo a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i].gt >> a[i].phi;
    int dem=0;
    long long sum=0;
    int max=0;
    sort(a+1, a+n+1, cmp);
    for (int i=1;i<=n;i++){
    	sum+=a[i].gt + a[i].phi;
    	if (a[i].gt/2>max) max=a[i].gt/2;
    	if (sum<=k) dem++;
    	else{
    		if (sum-max<=k) dem++;
			else break; 
		}
	}
	cout << dem;
}
 