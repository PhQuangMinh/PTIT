#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *makenode(int x){
	node *newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
void pushfront(node *&head, int x){
	node *newnode=makenode(x);
	newnode->next=head;
	head=newnode;
}
void pushback(node *&head, int x){
	node *newnode=makenode(x);
	if (head==NULL){
		head=newnode;return;
	}
	
	node *tmp=head;
	while (tmp->next!=NULL){
		tmp=tmp->next;
	}
	
	tmp->next=newnode;
}
void themNode(node *&head, int x, int k){
	node *newnode=makenode(x);
	if (k<1) return;
	
	if (k==1){
		pushfront(head, x);
		return;
	}
	
	node *tmp=head;
	for (int i=1;i<=k-2;i++)
	    tmp=tmp->next;
	newnode->next=tmp->next;
	tmp->next=newnode;
}
void duyet(node *head){
	while (head!=NULL){
		cout << head->data << " ";
		head=head->next;
	}
}
int main(){
	node *head=NULL;
	int x;
    while (1){
    	int lc;
    	cin >> lc;
    	if (lc==0) return 0;
    	if (lc==1){
    		cin >> x;
			pushfront(head, x);
			duyet(head);
			cout << "\n"; 
		}
		if (lc==2){
			int k;
    		cin >> x >> k;
			themNode(head, x, k);
			duyet(head);
			cout << "\n"; 
		}
		if (lc==3){
    		cin >> x;
			pushback(head, x);
			duyet(head);
			cout << "\n"; 
		}
	}
}
