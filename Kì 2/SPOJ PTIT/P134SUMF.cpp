#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
int main(){
	faster();
	int n, k;
	cin >> n >> k;
	int dem=0;
	int check[10000]={0};
	for (int i=2;i<=n;i++){
		if (snt(i)){
			for (int j=1;j<=n/i;j++){
				if (check[i*j]==0){
				    dem++;
				    if (dem==k){
					    cout << j*i;
					    return 0;
				    }
				    check[i*j]=1;
			    }
			}
		}
	}	
}