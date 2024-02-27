#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int nt[10005];
void sang(){
	for (int i=2;i*i<=10000;i++)
	    if (nt[i]==0)
	        for (int j=i*i;j<=10000;j+=i)
	            if (nt[j]==0) nt[j]=i;
}
int main(){
	faster();
	int n;
	sang();
	nt[1]=1;
	cin >> n;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		for (int j=1;j<=x;j++) 
		    if (nt[j]==0) cout << j << " ";
			else cout << nt[j] << " ";
		cout << "\n";
	}
}