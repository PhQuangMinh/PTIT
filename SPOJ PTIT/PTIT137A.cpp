#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int check(int a[]){
	for (int i=2;i<=4;i++)
	    if (a[i]!=a[i-1]) return 0;
	return 1;
}
int main(){
	faster();
    int a[10];
    cin >> a[1] >> a[2] >> a[3] >> a[4];
    while (a[1]!=0 || a[2]!=0 || a[3]!=0 || a[4]!=0){
    	int dem=0;
    	while (check(a)==0){
    		int t=a[1];
		    a[1]=abs(a[1]-a[2]);
    	    a[2]=abs(a[2]-a[3]);
    	    a[3]=abs(a[3]-a[4]);
    	    a[4]=abs(a[4]-t);
    	    dem++;
    	}
    	cout << dem << "\n";
    	cin >> a[1] >> a[2] >> a[3] >> a[4];
	}
}