#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return true;
	return false;
}
int main(){
	faster();
    int n, k; 
    cin >> n >> k;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1, cmp);
 //   for (int i=1;i<=n;i++) cout << a[i] << " ";
    for (int i=1;i<=n;i++){
    	if (a[i]<0 && k>0){
		    a[i]=-a[i];
		    k--;
		}
    	else break;
    }
	sort(a+1, a+n+1, cmp);
	if (k>0 && k%2==1){
		a[1]=-a[1];
	}
	long long sum=0;
	for (int i=1;i<=n;i++) sum+=a[i];
	cout << sum;
}