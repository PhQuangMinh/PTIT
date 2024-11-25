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
    queue<tree> q;
    stack<tree> st;
    q.push(T);
    int cnt = 1;
    cout << T->data << ' ';
    while (1){
        cnt++;
        if (cnt%2==0){
            while (!q.empty()){
                tree p = q.front();
                q.pop();
                if (p -> right != NULL){
                    st.push(p->right);
                }
                if (p->left != NULL){
                    st.push(p -> left);
                }
            }
            stack<tree> st1;
            while (!st.empty()){
                tree node = st.top();
                cout << node->data << ' ';
                st1.push(node);
                st.pop();
            }
            st = st1;
        }
        else{
            while (!st.empty()){
                tree p = st.top();
                st.pop();
                if (p->right != NULL){
                    q.push(p -> right);
                    cout << p->right->data << ' ';
                }
                if (p -> left != NULL){
                    q.push(p->left);
                    cout << p->left->data << ' ';
                }
            }

        }
        if (st.empty() && q.empty()){
            return;
        }
    }
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