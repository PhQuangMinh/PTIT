#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    string s;
    cin >> s;
    if (s.size()%3==1) s="00"+s;
    else 
        if (s.size()%3==2) s="0"+s;
    int d=0, sum=0;
    int n=s.size();
    for (int i=0;i<n;i++){
    	d++;
    	int k=s[i]-'0';
    	if (d==1) sum+=k*4;
    	if (d==2) sum+=k*2;
    	if (d==3){
    		sum+=k;
    		cout << sum;
    		d=0;
    		sum=0;
		}
	}
} 