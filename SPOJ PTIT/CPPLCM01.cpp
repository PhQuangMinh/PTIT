#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	faster();
	int t;
	cin >> t;
	for (int i=1;i<=t;i++){
	    int a, b;
	    cin >> a >> b;
	    int uc=ucln(a, b);
	    long long tich=(long long)a*b;
	    tich=tich/uc;
	    cout << tich << " " << uc << "\n";
	}
}