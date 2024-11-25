#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	string a, b;
	cin >> a >> b;
    int ia, jb;
    for (int i=0;i<a.size();i++)
        for (int j=0;j<b.size();j++)
            if (a[i]==b[j]){
            	ia=i;
            	jb=j;
            	i=a.size();
            	break;
			}
	int na=a.size();
	int nb=b.size();
	for (int i=0;i<nb;i++){
		if (jb!=i){
	        for (int j=0;j<na;j++)
	            if (j==ia) cout << b[i];
	            else cout << ".";
	    } else cout << a;
	    cout << "\n";
	}
}