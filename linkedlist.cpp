#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;

    }
};
class Linkedlist{
public:
    Node* head;
    Linkedlist(){
        head=NULL;
    }
    void insertattail(int value){
        Node* new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            return ;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= new_node;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
void deletealternate(Node* &head){
    Node* curr_node=head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp =curr_node->next;
        curr_node->next=curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }
}
void deletedupulicatenode(Node* &head){
    Node*curr_node=head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            Node*temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);
        }
        curr_node=curr_node->next;
    }
}
void reverselinkedlist(Node* &head){
    if(head==NULL){
        return;
    }    
    reverselinkedlist(head->next);
    cout<<head->val<<" ";
}
Node* reversell(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
    while(currptr!=NULL){
        Node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    Node* new_head=prevptr;
    return new_head;
}
Node* reversekll(Node* &head,int k){
    Node* prevptr=NULL;
    Node* currptr=NULL;
    int counter=0;
    while(currptr!=NULL && counter<k){
        Node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        counter++;    
    }
    if(currptr!=NULL){
        Node* new_head=reversekll(currptr,k);
        head->next=new_head;
    }
    return prevptr;
}

int main(){
    Linkedlist ll;
    int n;
    cout<<"Enter the number of element to be added in the linked list:";
    cin>>n;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        ll.insertattail(val);
    }
    ll.display();
    //deletealternate(ll.head);
    ll.display();
    //deletedupulicatenode(ll.head);
    //reverselinkedlist(ll.head);
    ll.head=reversell(ll.head);
    ll.display();

}