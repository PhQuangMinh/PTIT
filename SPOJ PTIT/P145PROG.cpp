#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1073741824;
int uoc[1000005];
void sanguoc(){
	for (int i=1;i<=1000000;i++)
	    for (int j=i;j<=1000000;j+=i)
	        uoc[j]++;
}
int main(){
	faster();
	sanguoc();
	int x, y, z;
	cin >> x >> y >> z;
	long long res=0;
	for (int i=1;i<=x;i++)
	    for (int j=1;j<=y;j++)
	        for (int k=1;k<=z;k++){
	        	res+=uoc[i*j*k];
	        	res%=mod;
			}
	cout << res;
} 