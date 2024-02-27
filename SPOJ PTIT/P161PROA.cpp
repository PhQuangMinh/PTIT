#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int snt[1000005];
void sang(){
	for (int i=2;i*i<=1000000;i++)
	    if (snt[i]==0)
	        for (int j=i*i;j<=1000000;j+=i)
	           snt[j]=1;
}
int checksnt(long long x){
	int k=sqrt(x);
	if ((long long)k*k!=x) return 0; 
	if (snt[k]) return 0;
	return x>1;
}
int main(){
	faster();
	sang();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		long long x;
		cin >> x;
		if (checksnt(x)) cout << "YES\n";
		else cout << "NO\n";
	}
}