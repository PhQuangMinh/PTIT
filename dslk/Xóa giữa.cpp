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
void popgiua(node *&head, int k){
	if (head==NULL) return;
	if (head->next==NULL){
		popfront(head);
		head=NULL;
		return;
	}
	node *tmp=head;
	for (int i=1;i<=k-2;i++)
	    tmp=tmp->next;
	node *knode=tmp->next;
	tmp->next=knode->next;
	delete knode;
}
void push(node *&head, int x){
	node *newnode=makenode(x);
	newnode->data=x;
	newnode->next=head;
	head=newnode;
}
void sort(node *&head){
	for (node *i=head;i!=NULL;i=i->next){
		node *minnode=i;
		for (node *j=i;j!=NULL;j=j->next)
		    if (minnode->data>j->data){
		    	minnode=j;
			}
		int tmp=minnode->data;
		minnode->data=i->data;
		i->data=tmp;
	}
}
int main(){
	node *head=NULL;
	for (int i=1;i<=10;i++){
		push(head, i);
	}
	popfront(head);
	popback(head);
	int k;
	cin >> k;
	popgiua(head, k);
	sort(head);
	duyet(head);
}
