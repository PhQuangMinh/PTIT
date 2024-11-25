#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    queue<int> qu;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << qu.size() << "\n";
            break;
        case 2:
            if (qu.empty()) cout << "YES\n";
            else cout << "NO\n";
            break;
        case 3:
            int t;
            cin >> t;
            qu.push(t);
            break;
        case 4:
            if (!qu.empty()) qu.pop();
            break;
        case 5:
            if (qu.empty()) cout << "-1\n";
            else cout << qu.front() << '\n';
            break;
        case 6:
            if (qu.empty()) cout << "-1\n";
            else cout << qu.back() << '\n';
            break;
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}