#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    priority_queue<int, vector<int>, greater<int>> q1;
    priority_queue<int, vector<int>, greater<int>> q2;
    int tong=0;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        if (x%3==0) q.push(x);
        else
            if (x%3==1) q1.push(x);
            else
                q2.push(x);
        tong+=x;
    }
    if (tong==0){
        cout << 0;
        return;
    }
    if (tong%3==1){
        if (q1.size()){
            q1.pop();
        }
        else
            if (q2.size()>1){
                q2.pop();
                q2.pop();
            }
            else{
                cout << -1;
                return;
            }
    }
    if (tong%3==2){
        if (q2.size()){
            q2.pop();
        }
        else
            if (q1.size()>1){
                q1.pop();
                q1.pop();
            }
            else{
                cout << -1;
                return;
            }
    }
    priority_queue<int> res;
    while (q.size()){
        res.push(q.top());
        q.pop();
    }
    while (q1.size()){
        res.push(q1.top());
        q1.pop();
    }
    while (q2.size()){
        res.push(q2.top());
        q2.pop();
    }
    if (res.size()==0){
        cout << -1;
        return;
    }
    while (res.size()){
        cout << res.top();
        res.pop();
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}