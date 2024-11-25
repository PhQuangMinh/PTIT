#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n;
    cin >> n;
    int dem=0;
    for (int i=1;i<=n;i++)
        for (int j=i+1;j<=n;j++){
       	    int t=i*i+j*j;
       	    int k=sqrt(t);
       	    if (k*k==t && k<=n){
			    dem++;
//			    cout << i << " " << j << " " << k << "\n";
			}
	    }
	cout << dem;
}
 