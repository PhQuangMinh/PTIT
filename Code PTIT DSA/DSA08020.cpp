#include<bits/stdc++.h>
using namespace std;
vector<int> nt;
vector<int> dt[10000];
int snt(int x){
    for (int i=2;i*i<=x;i++)
        if (x%i==0) return 0;
    return x>1;
}
int check(int x, int y){
    int d=0;
    while (x!=0){
        if (x%10==y%10) d++;
        x/=10;
        y/=10;
    }
    return d==3;
}
void sang(){
    for (int i=1000;i<=9999;i++)
        if (snt(i)) nt.push_back(i);
    for (int i=0;i<nt.size()-1;i++)
        for (int j=i+1;j<nt.size();j++)
            if (check(nt[i], nt[j])){
                dt[nt[i]].push_back(nt[j]);
                dt[nt[j]].push_back(nt[i]);
            }
}
void solve(){
    int x, y;
    cin >> x >> y;
    int dem[10000]={0};
    int visited[10000]={0};
    queue<int> qu;
    qu.push(x);
    int res=1e9;
    while (qu.size()){
        int u=qu.front();
        qu.pop();
        visited[u]=1;
        if (u==y){
            res=min(res, dem[u]);
            continue;
        }
 //       cout << u << ": ";
        for (int i=0;i<dt[u].size();i++){
            int v=dt[u][i];
            if (visited[v]==0){
                if (dem[v]!=0) dem[v]=min(dem[v], dem[u]+1);
                else dem[v]=dem[u]+1;
 //               cout << v << " ";
                qu.push(v);
            }
        }
//        cout << "\n";
    }
    cout << res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sang();
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}