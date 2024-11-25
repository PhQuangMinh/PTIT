#include<bits/stdc++.h>
using namespace std;
int a[20];
int tong, res=0, n;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> tong >> n;
	for (int i=1;i<=n;i++) cin >> a[i];
	int np[20]={0}; 
	while (1){
		int sum=0;
	    for (int i=1;i<=n;i++)
	        if (np[i]) sum+=a[i];
	    if (sum<=tong && sum>res) res=sum;
	    int i=n;
		while (i>0 && np[i]){
			np[i]=0;
			i--;
		}
		if (i==0) break;
		np[i]=1;
	}
	cout << res;
} 