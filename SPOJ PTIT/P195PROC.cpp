#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int main(){
	faster();
	int n;
    cin >> n;
    int a[n+5];
    int sum=0;
    int res=0;
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1, cmp);
    long long phat=0;
    for (int i=1;i<=n;i++){
    	sum=sum+a[i];
    	if (sum<=300){
    		res++;
		}
		else break;
	}
	int d=1;
	for (int i=res;i>=1;i--){
		phat+=d*a[i];
		d++;
	}
	cout << res << " " << phat;
} 