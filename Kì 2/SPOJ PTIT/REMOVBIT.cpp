#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
char s[10000000];
char kq[10000000];
int main(){
	faster();
    cin >> s;
    int ok=0;
    int d=0;
    for (int i=0;i<strlen(s);i++){
    	if (ok){
    		kq[d]=s[i];
    		d++;
		}
		else
		    if (s[i]=='1'){
		    	kq[d]=s[i];
		    	d++;
			}
			else ok=1;
	}
	if (ok==0) d--;
	for (int i=0;i<d;i++) cout << kq[i];
} 