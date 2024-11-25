#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string s;
	cin >> s;
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		char t;
		cin >> t;
		if (t=='?'){
			int l, h, m;
			cin >> l >> h >> m;
			string s1, s2;
			s1.resize(m);
			s2.resize(m);
			copy(s.begin()+l-1, s.begin()+l+m-1, s1.begin());
			copy(s.begin()+h-1, s.begin()+h+m-1, s2.begin());
			if (s1==s2) cout << "YES\n";
			else cout << "NO\n";
//			cout << s1 << " " << s2 << "\n";
		}
		else{
			int k;
			cin >> k;
			s.erase(s.begin()+k-1);
		}
	}
} 