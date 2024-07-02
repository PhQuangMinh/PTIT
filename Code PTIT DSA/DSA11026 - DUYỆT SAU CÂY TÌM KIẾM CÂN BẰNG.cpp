#include<bits/stdc++.h>
using namespace std;
#define tree node*
const int mod = 1e9+7;
struct node{
    int data;
    node* left;
    node* right;
};
vector<int> a;
tree create(int x){
    tree newNode = new node;
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
tree build(int l, int r){
    if (l>r) return NULL;
    int mid = (l+r) >> 1;
    tree t = create(a[mid]);
    t->left = build(l, mid-1);
    t->right = build(mid+1, r);
    return t;
}
void duyet(tree t){
    if (t != NULL){
        duyet(t->left);
        duyet(t->right);
        cout << t->data << ' ';
    }
}
void solve(){
    a.clear();
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    tree t = build(0, n-1);
    duyet(t);
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << '\n';
    }
}