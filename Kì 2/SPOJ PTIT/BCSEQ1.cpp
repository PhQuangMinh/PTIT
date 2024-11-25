#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int uoc[100];
int d;
bool cmp(int a, int b){
	if (a>b) return 1;
	return 0;
}
void timuoc(int n){
	for (int i=1;i*i<=n;i++)
	    if (n%i==0){
	    	if (i*i==n) uoc[++d]=i;
	    	else{
	    		uoc[++d]=i;
	    		uoc[++d]=n/i;
			}
		}
}
void solve(){
	int n, test;
	cin >> test >> n;
	int a[n+5];
	int sum=0;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		sum+=a[i];
	}
	timuoc(sum);
	sort(uoc+1, uoc+d+1, cmp);
	for (int i=1;i<=d;i++){
		int sum1=sum/uoc[i];
		int dem=0;
		int sum2=0;
		int ok=1;
		for (int j=1;j<=n;j++){
			sum2+=a[j];
			if (sum1==sum2){
				sum2=0;
				dem++;
			}
			else
                if (sum2>sum1){
                	ok=0;
                	break;
                }
		}
		if (ok==1 && dem==uoc[i]){
			cout << test << " " << sum1 << "\n";
			return;
		}
	}
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 