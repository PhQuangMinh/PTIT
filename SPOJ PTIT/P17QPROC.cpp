#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long tong[10000005];
long long uoc[10000005];
void sanguoc(){
	uoc[0]=0;
	for (int i=1;i<=10000000;i++)
	    for (int j=i;j<=10000000;j+=i)
	        uoc[j]+=i;
}
void sangkhh(){
	tong[0]=0;
	for (int i=1;i<=10000000;i++)
	    tong[i]=tong[i-1]+abs(uoc[i]-i*2);
}
void solve(){
	int a, b;
	cin >> a >> b;
	cout << tong[b]-tong[a-1] << "\n";
}
int main(){
	faster();
	sanguoc();
	sangkhh();
	solve();
} 