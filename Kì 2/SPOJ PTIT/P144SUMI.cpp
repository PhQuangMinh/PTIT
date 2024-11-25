#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int bcnn(int x, int y){
	int t=x*y;
	int k=y%x;
	while (k!=0){
		k=x%y;
		x=y;
		y=k;
	}
	return t/x;
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int ans;
	if (n%m==0) ans=0;
	else{
		if (m%n==0) ans=(m/n-1)*n;
		else{
			ans=0;
			int bc=bcnn(n, m);
			int t1=bc/n;
			int t2=bc/m;
			int sum=0;
			int i=1;
//			cout << t1 << " " << t2;
			for (int i=1;i<=m;i++){
				while (sum<t2) sum+=t1;
			    if (sum==t2) sum=0;
				else 
				    if (sum>t2){
					    ans++;
					    sum-=t2;
				    }
			}
			cout << ans;
			return 0;
		}
	}
	cout << ans;
}
 