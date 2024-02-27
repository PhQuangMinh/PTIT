#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int s1, d;
    cin >> d >> s1;
    int s = s1;
    if (d*9<s){
        cout << "-1 -1";
        return;
    }
    string ans1="1";
    for (int i=1;i<d;i++){
        ans1+="0";
    }
    string ans = ans1;
    int j = d-1;
    s--;
    while (s>0){
        if (j==0){
            ans[j] = (s+1)+'0';
            s=0;
        }
        else{
            if (s>=9){
                ans[j]='9';
                s-=9;
            }
            else{
                ans[j] = s+'0';
                s=0;
            }
        }
        j--;
    }
    cout << ans << ' ';
    s = s1;
    ans ="";
    while (s>0){
        if (s>=9){
            ans+='9';
            s-=9;
        }
        else{
            ans+=s+'0';
            s=0;
        }
    }
    while (ans.size()<d) ans+='0';
    cout << ans;
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}