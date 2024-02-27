#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	string s;
	cin >> s;
	vector<int> d;
	int res = 0;
	d.push_back(-1);
    for (int i=0; i<s.size();i++) {
        if (s[i] == '(')
            d.push_back(i);
		else {
            d.pop_back();
            if (d.empty()) d.push_back(i);
			else 
                res = max(res, i - d.back());
        }
//        cout << res << " ";
    }
    cout << res;
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