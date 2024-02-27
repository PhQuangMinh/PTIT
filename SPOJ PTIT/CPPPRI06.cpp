#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int nt[10005];
void sang(){
	for (int i=2;i*i<=10000;i++)
	    if (nt[i]==0)
	        for (int j=i*i;j<=10000;j+=i)
	            nt[j]=1;
}
int main(){
	faster();
	int n;
	sang();
	cin >> n;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		for (int j=2;j<=x/2;j++) 
		    if (nt[j]==0 && nt[x-j]==0){
			    cout << j << " " << x-j;
			    break;
			}
		cout << "\n";
	}
}