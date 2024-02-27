#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int n, k, s, ans;
void ktr(int x, int a[]){
	int sum=0;
	for (int i=1;i<=x;i++)
	    sum+=a[i];
	if (sum==s){
	    ans++;
//	    for (int i=1;i<=x;i++) cout << a[i] << " ";
//	    cout << "\n";
	}
}
void chapk(int x, int a[]){
	for (int i=a[x-1]+1;i<=n-k+x;i++){
		a[x]=i;
		if (x==k) ktr(x, a);
		else chapk(x+1, a);
	}
}
int main(){
	faster();
	cin >> n >> k >> s;
	while (n!=0 && k!=0 && s!=0){
		ans=0;
		int a[100];
		a[0]=0;
		chapk(1, a);
		cout << ans << "\n";
		cin >> n >> k >> s;
	}
}
 