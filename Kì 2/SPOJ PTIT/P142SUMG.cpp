#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string s;
	getline(cin >> ws, s);
	int d[200]={0};
	int ma=0;
	for (int i=0;i<s.size();i++){
	    if (s[i]!=' ') d[s[i]]++;
	    ma=max(d[s[i]], ma);
	}
	int dem=0;
	char smax;
	for (int i=1;i<=100;i++)
	    if (d[i]==ma && i!=' '){
	    	dem++;
	    	smax=i;
	    }
	if (dem>1){
		cout << "NOT POSSIBLE\n";
		return;
	}
	int kc;
	if (smax>='E' && smax<='Z') kc=smax-'E';
	else kc=26+smax-'E';
//	cout << kc << " ";
	for (int i=0;i<s.size();i++){
		if (s[i]!=' '){
		    if (s[i]-kc>=65) s[i]=s[i]-kc;
		    else s[i]=s[i]+26-kc;
		}
	}
	cout << kc << " " << s;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) cout << "\n";
	}
} 