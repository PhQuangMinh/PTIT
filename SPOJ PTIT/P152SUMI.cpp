#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string s;
	cin >> s;
    int n=s.size();
    int m;
    cin >> m;
    int dem[n+5]={0};
    if (s[0]==s[1]) dem[1]=1;
    else dem[1]=0;
    s[n]='1';
    for (int i=1;i<n;i++)
        if (s[i]==s[i+1]) dem[i+1]=dem[i]+1;
        else dem[i+1]=dem[i];
//    for (int i=1;i<=n;i++) 
//        cout << dem[i] << " ";
//    cout << "\n";
    for (int i=1;i<=m;i++){
    	int x, y;
    	cin >> x >> y;
    	cout << dem[y-1]-dem[x-1] << "\n";
	}
}