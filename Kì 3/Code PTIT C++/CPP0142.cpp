#include <bits/stdc++.h>
using namespace std;
int snt(int x){
    for (int i=2;i*i<=x;i++)
        if (x%i==0) return 0;
    return x>1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
        int d=0;
		cin>>x;
		for(int i=1;i<=x;i++){
			if(__gcd(i,x)==1) d++;
		}
		if(snt(d)) cout<<"1\n";
		else cout<<"0\n";
	}
}