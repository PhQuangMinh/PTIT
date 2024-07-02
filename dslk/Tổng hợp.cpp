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
int size(node *head){
	int dem=0;
	while (head!=NULL){
		++dem;
		head=head->next;
	}
	return dem;
}
void pushfront(node *&head, int x){
	node *newnode=makenode(x);
	if (head==NULL){
		head=newnode;return;
	}
	newnode->next=head;
	head=newnode;
}
void themNode(node *&head, int k, int x){
	int n=size(head);
	if (k<1 || k>n+1) return;
	if (k==1){
		pushfront(head, x);
		return;
	}
	node *newnode=makenode(x);
	node *tmp=head;
	for (int i=1;i<=k-2;i++)
	    tmp=tmp->next;
	newnode->next=tmp->next;
	tmp->next=newnode;
}
void pushback(node *&head, int x){
	if (head==NULL){
		pushfront(head, x);
		return;
	}
	node *tmp=head;
	while (tmp->next!=NULL)
	    tmp=tmp->next;
	node *newnode=makenode(x);
	tmp->next=newnode;
	newnode->next=NULL;
}
void deletefront(node *&head){
	if (head==NULL) return;
	node *tmp=head;
	head=head->next;
	delete tmp;
}
void deletegiuavacuoi(node *&head, int k){
	int n=size(head);
	if (k>n || k<1 || head==NULL) return;
	node *tmp=head;
	while (tmp->next->next!=NULL){
		tmp=tmp->next;
	}
	node *giua=tmp->next;
	tmp->next=giua->next;
	delete giua;
}
void sort(node *&head){
	for (node *i=head;i!=NULL;i=i->next){
		node *minnode=i;
		for (node *j=i;j!=NULL;j=j->next)
		    if (j->data<minnode->data){
		    	minnode=j;
			}
		swap(minnode->data, i->data);
	}
}
int main(){
	node *head=NULL;
	while (1){
		int chon;
		cout << "1. So luong node. \n";
		cout << "2. Chen vao dau node.\n";
		cout << "3. Chen vao giua node. \n";
		cout << "4. Chen vao cuoi node.\n";
		cout << "5. Xoa dau node. \n";
		cout << "6. Xoa dau va giua node.\n";
		cout << "7. Sap xep lai node.\n";
		cout << "8. Duyet node.\n";
		cout << "------------------------------\n";
		cin >> chon;
		int x, k;
		switch (chon){
			case 1:{
				cout << size(head) << "\n";
				break;
			}
			case 2:{
			    cin >> x;
				pushfront(head, x);
				break;
			}
			case 3:{
				cin >> x >> k;
				themNode(head, k, x);
				break;
			}
			case 4:{
				pushback(head, x);
				break;
			}
			case 5:{
				deletefront(head);
				break;
			}
			case 6:{
				cin >> k;
				deletegiuavacuoi(head, k);
				break;
			}
			case 7:{
				sort(head);
				break;
			}
			case 8:{
				duyet(head);
				break;
			}
		}
	}
}
