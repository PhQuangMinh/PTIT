#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int a, b;
    cin >> a >> b;
    if (a==b){
    	cout << "infinity";
    	return 0;
	}
	else{
		if (b>a){
			cout << 0;
			return 0;
		}
	}
    int n=a-b;
    int res=0;
    for (int i=1;i*i<=n;i++)
        if (n%i==0){
            int uoc=n/i;
            if (a%i==b) res++;
            if (a%uoc==b) res++;
            if (i*i==n && a%i==b) res--;
		}
	cout << res;
} 