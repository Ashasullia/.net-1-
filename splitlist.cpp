#include<iostream>
using namespace std;
struct Node{
	int value;
	struct Node*next;
};
struct Node*head=NULL;
struct Node*sHead=NULL;
struct Node*temp=NULL;
void insert (int new_data){
struct Node*new_node=new Node;
new_node->value=new_data;
new_node->next=head;
head=new_node;
}
int n;
int ele;
int splitele;
int main()
{
	int i;
	cout<<"enter the number of elements you want in this list\t";
	cin>>n;
	cout<<"enter elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>ele;
		insert(ele);
		}
		cout<<"\n list of elements:"<<endl;
		Node*t;
		t=head;
		while(t!=NULL){
			cout<<t->value<<"\t";
			t=t->next;
		}
		cout<<"\n\n enter the element you want to the list to split ";
		cin>>splitele;
		while(ele!=splitele){ 
		cout<<"invalid element try again  "<<endl;
		cin>>splitele;
		}
	
		temp=head;
		for(i=0;i<n;i++){
	    while(ele==splitele){
		Node*tN;
		tN=temp->next;
		sHead=tN;
		temp->next=NULL;
		break;
		}
		
		temp=temp->next;
		}
		temp=head;
		if(temp==NULL){
		cout<<"\nfirst list is empty"<<endl;
		}else{
		cout<<"\n\nfirst list element"<<endl;
		while(temp!=NULL){
		cout<<temp->value<<"\t";
		temp=temp->next;
		}
		}
		temp=sHead;
		if(temp==NULL){
		cout<<"\nsecond list is empty"<<endl;
		}else{
		cout<<"\n\nsecond list elements"<<endl;
		while(temp!=NULL){
		cout<<temp->value<<"\t";
		temp=temp->next;
	}
}
return 0;
}
