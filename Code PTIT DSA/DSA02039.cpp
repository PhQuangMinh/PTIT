#include<bits/stdc++.h>
using namespace std;
int a[100];
int ok=1;
int ans;
void sinh(){
	int i=ans;
	while (i>=1 && a[i]==1) i--;
	if (i==0){
		ok=0;
		return;
	}
	a[i]--;
	int d=ans-i+1;
	ans=i;
	int p=d/a[i];
	int r=d%a[i];
	for (int j=1;j<=p;j++) a[++ans]=a[i];
	if (r) a[++ans]=r;
}
void solve(){
    ans=1;
	int n;
	cin >> n;
	a[1]=n;
	ok=1;
    vector<vector<int>> res;
	while (1){
        vector<int> tmp;
		for (int i=1;i<=ans;i++){
            tmp.push_back(a[i]);
    	}
        res.push_back(tmp);
		sinh();
		if (ok==0) break;
	}
    cout << res.size() << '\n';
    for (auto tmp:res){
        cout << "(";
		for (int i=0;i<tmp.size();i++){
			cout << tmp[i];
			if (i!=tmp.size()-1) cout << " ";
			else cout << ") ";
    	}
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) cout << "\n";
	}
}