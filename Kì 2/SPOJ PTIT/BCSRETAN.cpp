#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int n;
    cin >> n;
    int res=0;
    n++;
    int kq[100];
    while (n!=0){
    	res++;
    	kq[res]=n%2;
    	n/=2;
	}
	for (int i=res-1;i>=1;i--){
		if (kq[i]==0) cout << 4;
		else cout << 7;
	}
} 