#include<bits/stdc++.h>
using namespace std;
void solve(){
    	int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int l,r,k=-1;
		cin>>l>>r;
		for(int i=l;i<r;i++){
			if(a[i]>a[i+1]){
				k=i;
				break;
			}
		}
		if(k!=-1){
			for(int i=k;i<r;i++){
				if(a[i]<a[i+1]){
					k=-2;
					break;
				}
			}
		}
	if(k==-2) cout<<"No";
	else cout<<"Yes";
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}