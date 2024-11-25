#include<bits/stdc++.h>
using namespace std;
#define tree node*
struct node{
    int data;
    node* left;
    node* right;
};
tree create(int x){
    tree newNode = new node;
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void build(tree &t, int x){
    if (t==NULL){
        t = create(x);
    }
    else{
        if (t->data>x){
            build(t->left, x);
        }
        else{
            build(t->right, x);
        }
    }
}
void duyet(tree t){
    if (t){
        cout << t->data << ' ';
        duyet(t->left);
        duyet(t->right);
    }
}
void solve(){
    int n;
    cin >> n;
    tree t= NULL;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        build(t, x);
    }
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