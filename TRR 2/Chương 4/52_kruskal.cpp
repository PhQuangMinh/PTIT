#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
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
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int x;
            cin >> x;
            if (i<=j && x!=0){
                canh.push_back({i, j, x});
            }
        }
    }

}
int cmp(edge x, edge y){
    if (x.w<y.w || x.w == y.w && x.u<y.u || x.w==y.w && x.u==y.u && x.v<y.v) return 1;
    return 0;
}
void kruskal(){
    vector<edge> mst;
    int d = 0;
    sort(canh.begin(), canh.end(), cmp);
    for (int i=0;i<canh.size();i++){
        if (mst.size()==n-1) break;
        edge e = canh[i];
        if (Union(e.u, e.v)){
            mst.push_back(e);
            d+=e.w;
        }
    }
    cout << "dH = " << d << "\n";
    for (auto it:mst){
        cout << it.u << ' ' << it.v << '\n';
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    inp();
    make_set();
    kruskal();
}