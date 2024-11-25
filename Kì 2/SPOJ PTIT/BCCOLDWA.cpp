#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int dai[100000];
 int n1[100000], n2[100000];
void caynp(int goc){
	dai[n1[goc]]=dai[goc]+1;
	dai[n2[goc]]=dai[goc]+1;
	int t=goc;
	goc=n1[goc];
//	cout << goc << "a\n";
	if (n1[goc]!=0) caynp(goc);
	goc=n2[t];
//	cout << goc << "a\n";
	if (n1[goc]!=0) caynp(goc);
}
int main(){
	faster();
    int n, m; 
    cin >> n >> m;
    int goc;
    for (int i=1;i<=m;i++){
    	cin >> goc;
    	cin >> n1[goc];
    	cin >> n2[goc];
	}
	dai[1]=1;
	caynp(1);
	for (int i=1;i<=n;i++) cout << dai[i] << "\n";
}