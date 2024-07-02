#include<bits/stdc++.h>
using namespace std;
#define tree node*
const int mod = 1e9+7;
int u, v;
char c;
int tong;
struct node{
    int data;
    node* right;
    node* left;
};
tree create(int x){
    tree newNode = new node;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = x;
    return newNode;
}
void build(tree &T){
    if (T){
        if (T->data == u){
            if (c == 'L'){
                T -> left = create(v);
            }
            else{
                T -> right = create(v);
            }
        }
        build(T->left);
        build(T->right);
    }
}

int duyet(tree T){
    if (T == NULL) return 0;
    int l = duyet(T->left);
    int r = duyet(T->right);
    if (T->left == NULL && T->right==NULL){
        return T->data;
    }
    if (T->left == NULL){
        return r + T->data;
    }
    if (T->right == NULL){
        return l + T->data;
    }
    tong = max(tong, l+r+T->data);
    return max(l, r) + T->data;
}
void solve(){
    tong = 0;
    int n;
    cin >> n;
    cin >> u >> v >> c;
    n--;
    tree T = create(u);
    build(T);
    while (n--){
        cin >> u >> v >> c;
        build(T);
    }
    tong = -mod;
    duyet(T);
    cout << tong;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << '\n';
    }
}