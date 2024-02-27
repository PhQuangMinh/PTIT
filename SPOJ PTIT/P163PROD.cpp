#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int loai0(int n){
	long long d=1;
	int t=0;
	while (n!=0){
		if (n%10!=0){
		    t+=(n%10)*d;
		    d*=10;
		}
		n/=10;
	}
	return t;
}
int main(){
	faster();
    int a, b;
    cin >> a >> b;
    int c=a+b;
    a=loai0(a);
    b=loai0(b);
    c=loai0(c);
    if (a+b==c) cout << "YES";
    else cout << "NO";
}