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
	cout << "\n";
}
void popfront(node *&head){
	if (head==NULL) return;
	node *tmp=head;
	head=head->next;
	delete tmp;
}
void popback(node *&head){
	if (head==NULL) return;
	if (head->next==NULL){
		node *tmp=head;
		head=head->next;
		delete tmp;
	}
	node *tmp=head;
	while (tmp->next->next!=NULL){
		tmp=tmp->next;
	}
	node *last=tmp->next;
	tmp->next=last->next;
	delete last;
}
void push(node *&head, int x){
	node *newnode=makenode(x);
	newnode->data=x;
	newnode->next=head;
	head=newnode;
}
int main(){
	node *head=NULL;
	for (int i=1;i<=10;i++){
		push(head, i);
	}
	popfront(head);
	popback(head);
}
