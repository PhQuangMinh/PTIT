#include<bits/stdc++.h>
using namespace std;
#define tree node*
int u, v;
char c;
int maxTree;
bool check;
struct node{
    int data;
    node* left;
    node* right;
};
tree create(int x){
    tree newNode = new node;
    newNode -> left = NULL;
    newNode -> right = NULL;
    newNode -> data = x;
    return newNode;
}
void buildTree(tree &T){
    if (T){
        if (T->data == u){
            if (c == 'L'){
                T -> left = create(v);
            }
            else{
                T -> right = create(v);
            }
        }
        buildTree(T->left);
        buildTree(T->right);
    }
}
void duyet(tree T){
    queue<pair<tree, int>> q;
    q.push({T, 1});
    maxTree = 1;
    while (!q.empty()){
        pair<tree, int> p = q.front();
        q.pop();
        if (p.first->left == NULL || p.first->right == NULL){
            if (p.second<maxTree){
                cout << 0;
                return;
            }
        }
        else{
            maxTree = max(maxTree, p.second+1);
            q.push({p.first->left, p.second + 1});
            q.push({p.first->right, p.second + 1});
        }
    }
    cout << 1;
}
void solve(){
    int n;
    cin >> n;
    n--;
    cin >> u >> v >> c;
    tree T = create(u);
    buildTree(T);
    while (n--)
    {
        cin >> u >> v >> c;
        buildTree(T);
    }
    maxTree = 0;
    duyet(T);
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << '\n';
    }
}