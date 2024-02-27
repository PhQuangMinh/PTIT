#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a>b) return true;
	return false;
}
int main(){
	faster();
    string s, t;
    cin >> s >> t;
    int lens=s.size();
    int lent=t.size();
    int a[100005];
    for (int i=0;i<lent;i++){
    	a[i]=t[i]-'0';
	}
    sort(a, a+lent, cmp);
    int j=0;
    for (int i=0;i<lens;i++){
    	int k=s[i]-'0';
    	if (a[j]>k){
    		s[i]=a[j]+'0';
    		j++;
		}
	}
	cout << s;
}