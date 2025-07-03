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

int main(){
    vector<int>data = {1, 2, 3, 4, 5};
    Node* head = new Node(data[2], nullptr);
    cout << head << "\n";
    cout << head -> data << endl;
}