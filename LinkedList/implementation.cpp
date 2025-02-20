#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    // Constructor
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};


// convert array to linked list 
Node* arrayToLinkedList(vector<int>&arr){

    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i = 1; i<arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

// print the linked list
void printLinkedList(Node*head){
    Node*temp = head;

    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"nullptr";
}


int main(){

    vector <int> arr = {2, 5, 6, 10};
    Node*head = arrayToLinkedList(arr);

    printLinkedList(head);
    return 0;
}