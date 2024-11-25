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
void duyet(node *head){
	while (head!=NULL){
		cout << head->data << " ";
		head=head->next;
	}
}
void push(node *&head, int x){
	node *tmp=head;
	node *newnode=makenode(x);
	
	if (head==NULL){
		head=newnode;return;
	}
	
	while (tmp->next!=NULL){
		tmp=tmp->next;
	}
	
	tmp->next=newnode;
	
}
int main(){
	node *head=NULL;
	for (int i=1;i<=10;i++)
	    push(head, i);
	duyet(head);
}
