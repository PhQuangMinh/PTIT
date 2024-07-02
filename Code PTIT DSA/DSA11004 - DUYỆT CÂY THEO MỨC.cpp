#include<bits/stdc++.h>
using namespace std;
#define tree node*
int u, v;
char c;
struct node{
    int data;
    node* left;
    node* right;
};
tree createNode(int x){
    tree newNode = new node;
    newNode -> data = x;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}
void buildTree(tree &T){
    if (T){
        if (T->data == u){
            if (c == 'L'){
                T -> left = createNode(v);
            }
            else{
                T -> right = createNode(v);
            }
        }
        buildTree(T->left);
        buildTree(T->right);
    }
}
void duyet(tree T){
    queue<tree> q;
    q.push(T);
    while (!q.empty())
    {
        tree x = q.front();
        q.pop();
        cout << x->data << ' ';
        if (x -> left){
            q.push(x -> left);
        }
        if (x -> right){
            q.push(x -> right);
        }
    }
    
}
void solve(){
    int n;
    cin >> n;
    n--;
    cin >> u >> v >> c;
    tree T = createNode(u);
    buildTree(T);
    while (n--){
        cin >> u >> v >> c;
        buildTree(T);
    }
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