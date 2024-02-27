#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int dem[3000000];
int nt[3000000];
void sang(){
	nt[0]=1;
	nt[1]=1;
	for (int i=2;i<=sqrt(3000000);i++)
	    if (nt[i]==0)
	        for (int j=i*i;j<=3000000;j+=i) nt[j]=1;
}
void sangnt(){
	dem[0]=0;
	for (int i=1;i<=3000000;i++)
	    if (nt[i]==0) dem[i]=dem[i-1]+1;
	    else dem[i]=dem[i-1];
}
int main(){
	faster();
	sang();
	sangnt();
	int a;
	cin >> a;
	while (a!=0){
	    cout << dem[2*a]-dem[a] << "\n";
	    cin >> a;
	}
} 