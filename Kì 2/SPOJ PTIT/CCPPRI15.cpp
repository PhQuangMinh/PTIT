#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int uoc[1000005];
void sang(){
	uoc[1]=1;
	for (int i=2;i*i<=1000000;i++)
	    if (uoc[i]==0){
	        for (int j=i*i;j<=1000000;j+=i)
	            if (uoc[j]==0)
	                uoc[j]=i;
	    }
}
void solve(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) 
	    if (uoc[i]==0) cout << i << " ";
		else cout << uoc[i] << " ";
    cout << "\n";
}
int main(){
	faster();
	sang();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 