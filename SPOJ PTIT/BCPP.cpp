#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int uoc[1000005];
void sang(){
	for (int i=1;i<=1000000;i++){
	    	for (int j=i;j<=1000000;j+=i)
	    	    uoc[j]+=i;
		}
}
int main(){
	faster();
	int dem=0;
	int a, b;
	cin >> a >> b;
	sang();
	for (int i=a;i<=b;i++)
	    if (uoc[i]>2*i) {
		    dem++;
		}
	cout << dem;
}
 