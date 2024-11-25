#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	int uc=abs(a[1]-a[2]);
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++){
	    	int t=abs(a[i]-a[j]);
	    	uc=ucln(uc, t);
		}
	vector<int> uoc;
	for (int i=1;i*i<=uc;i++)
	    if (uc%i==0){
	    	if (i*i==uc) uoc.push_back(i);
	    	else{
	    		uoc.push_back(i);
	    		uoc.push_back(uc/i);
	    	}
//	    	cout << i << " ";
		}
	sort(uoc.begin(), uoc.end(), cmp);
	for (int i=1;i<uoc.size();i++) cout << uoc[i] << " ";
} 