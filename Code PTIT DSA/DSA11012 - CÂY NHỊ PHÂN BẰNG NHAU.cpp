#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
	cin >> n;
	cin.ignore();
	string s1, s2;
	getline(cin, s1);
	cin >> n;
	cin.ignore();
	getline(cin, s2);
	if (s1 != s2)
		cout << "0\n";
	else
		cout << "1\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}