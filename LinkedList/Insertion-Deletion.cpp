#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data; Node* next;
    public:
        Node(int dataToPlace, Node* nextPointer){
            data = dataToPlace;
            next = nextPointer;
        }    
};

Node* deleteHead(Node* head){
    if(!head) return NULL;
    if(head -> next == NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    head = head -> next;
    free(temp);
    return head;
}



Node* deleteTail(Node* head){
    if(!head) return NULL;
    if(head -> next == NULL){
        free(head);
        return NULL;
    }
    Node* temp = head;
    while(temp -> next){
        if(temp -> next -> next == NULL){
            free(temp -> next);
            temp -> next = NULL;
        }
        temp = temp -> next;
    }
    return head;
}

int main(){
    Node* head = new Node(0,nullptr);
    Node* mover = head;
    for(int i=0;i<7;i++){
        Node* currNode = new Node(i+1,nullptr);
        mover -> next = currNode;
        mover = currNode;
    } 
    Node* newHead = deleteHead(head);
    Node* temp = newHead;
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}