//Reverse a Linked List
#include <iostream>
using namespace std ; 

class Node {
    public:
        int data ; 
        Node *next ; 
        
        
};
Node *head = new  Node;

void creatLL(int A[] , int n){
    Node *temp ; 
    Node *last ; 
    head->data = A[0];
    head->next = nullptr ; 
    last = head ; 

    for(int i=0 ;  i<n ; i++){
        temp = new Node ; 
        temp->data = A[i];
        temp->next = nullptr ; 

        last->next = temp;
        last = temp ; 
    }

}

// Displaying LL 
void displayLL(Node *p){
    while(p!=nullptr){
        cout<<p->data<<" -> ";
        p=p->next ; 
    }
}

int main(){
    int A[] = {7,2,3,7,1};
    int n = sizeof(A)/sizeof(int);
    creatLL(A , n);
    displayLL(head) ;     

}