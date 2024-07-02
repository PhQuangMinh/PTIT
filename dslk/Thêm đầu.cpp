#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *makenode(int x){
	node *newnode = new node;
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
int count(node *head){
	int dem=0;
	while (head != NULL){
		++dem;
		head=head->next;
	}
	return dem;
}
void push(node *&head, int x){
	node *newnode=makenode(x);
	newnode->next=head;
	head = newnode;
}
int main(){
	node *head=NULL;
	for (int i=1;i<=5;i++){
		push(head, i);
	}
	duyet(head);
}
