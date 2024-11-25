#include<bits/stdc++.h>
using namespace std;
#define tree node*
int ans;
struct node{
    int data;
    node* right;
    node* left;
};
tree create(int x){
    tree newNode = new node;
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void build(tree &t, int x){
    if (t == NULL){
        t = create(x);
    }
    else{
        if (t->data > x){
            build(t->left, x);
        }
        else{
            build(t->right, x);
        }
    }
}
void duyet(tree t, int cnt){
    if (t!=NULL){
        cnt++;
        ans = max(ans, cnt);
        duyet(t->left, cnt);
        duyet(t->right, cnt);
    }

}
void solve(){
    ans = 0;
    int n;
    cin >> n;
    tree t = NULL;
    while (n--){
        int x;
        cin >> x;
        build(t, x);
    }
    duyet(t, 0);
    cout << ans - 1;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << '\n';
    }
}