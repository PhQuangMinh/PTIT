#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(long long a, long long b){
	if (a>b) return 1;
	return 0;
}
int scp(long long x){
	int k=sqrt(x);
	if ((long long)k*k==x) return 1;
	return 0;
}
int check(long long x){
	for (int i=1;i<=sqrt(x);i++)
	    if (x%i==0){
	    	if (scp(i) && sqrt(i)>1) return 0;
	    	if (scp(x/i) && sqrt(x/i)>1) return 0;
		}
	return 1;
}
int main(){
	faster();
    long long n; 
    cin >> n;
    long long uoc[2000];
    int d=0;
    for (int i=1;i<=sqrt(n);i++){
    	if (n%i==0){
    		if (i==sqrt(n)) uoc[++d]=i;
    		else{
    			uoc[++d]=i;
    			uoc[++d]=n/i;
			}
		}
	}
//	for (int i=1;i<=d;i++) cout << uoc[i] << " ";
	sort(uoc+1, uoc+d+1, cmp);
	for (int i=1;i<=d;i++)
	    if (check(uoc[i])){
	    	cout << uoc[i];
	    	return 0;
		}
}