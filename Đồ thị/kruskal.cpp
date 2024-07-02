#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vt[1001];
bool visited[1001];
int parent[1001], sz[1001];
struct edge{
    int u, v, w;
};
vector<edge> canh;
void make_set(){
    for (int i=1;i<=n;i++){
        parent[i] = i;
        sz[i]=1;
    }
}
int find (int u){
    if (u==parent[u]) return u;
    return parent[u] = find(parent[u]);
}
bool Union(int a, int b){
    a = find(a);
    b = find(b);
    if (a==b) return false;
    if (sz[a]<sz[b]) swap(a, b);
    sz[a]+=sz[b];
    parent[b] = a;
    return true;
}
void inp(){
    cin >> n >> m;
    for (int i=1;i<=m;i++){
        edge e;
        cin >> e.u >> e.v >> e.w;
        canh.push_back(e);
    }
}
int cmp(edge x, edge y){
    return x.w<y.w;
}
void kruskal(){
    vector<edge> mst;
    int d = 0;
    sort(canh.begin(), canh.end(), cmp);
    for (int i=0;i<m;i++){
        if (mst.size()==n-1) break;
        edge e = canh[i];
        if (Union(e.u, e.v)){
            mst.push_back(e);
            d+=e.w;
        }
    }
    if (mst.size()!=n-1){
        cout << "Do thi khong lien thong!";
    }
    else{
        cout << "MST: " << d << "\n";
        for (auto it:mst){
            cout << it.u << ' ' << it.v << ' ' << it.w << '\n';
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    inp();
    make_set();
    kruskal();
}