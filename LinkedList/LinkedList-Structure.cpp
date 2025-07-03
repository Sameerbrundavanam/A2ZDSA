#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int dataToPlace, Node* nextNodePointer){
            data = dataToPlace;
            next = nextNodePointer;
        }    
};

bool isFound(Node*head, int targetElement){
    Node* temp = head;
    while(temp){
        if(temp->data == targetElement){
            return true;
        } temp = temp -> next;
    }
    return false;
}

int main(){

    vector<int>data = {1, 2, 3, 4, 5};

    Node* head = new Node(data[0],nullptr);

    Node* mover = head;

    for(int i=1;i<data.size();i++){
        Node* node = new Node(data[i],nullptr);
        mover -> next = node;
        mover = node;
    }

    Node *temp = head;

    int lengthOfLL = 0;

    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
        lengthOfLL++;
    }

    cout << endl << "The length of the Linked List is: " << lengthOfLL << " ";

    cout << endl;

    int targetElement;

    bool result = isFound(head, targetElement = 3);

    (result) ? cout << "Element is Found" : cout << "Element is not Found";
    
}