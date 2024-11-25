#include<bits/stdc++.h>
using namespace std;
#define tree node*
int u, v;
char c;
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
    queue<tree> q;
    q.push(T);
    while (!q.empty()){
        tree p = q.front();
        q.pop();
        if (p->left == NULL || p->right == NULL){
            if (p->left == NULL && p->right !=NULL || p->left != NULL && p->right ==NULL){
                cout << "0";
                return;
            }
        }
        else{
            q.push(p->left);
            q.push(p->right);
        }
    }
    cout << "1";
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