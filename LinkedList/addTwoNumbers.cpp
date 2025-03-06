#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Create a dummy node
    Node*temp     = new Node(-1);
    Node* current = temp;
    int carry = 0;

    while(head1 || head2){
        int sum = 0;
        if(head1){
            sum += head1->data;
            head1 = head1->next;
        }

        if(head2){
            sum += head2->data;
            head2 = head2->next;
        }

        sum += carry;
        carry = sum/10;

        Node* newNode = new Node(sum % 10);
        current->next = newNode;
        current = current->next;

        if(carry){
            Node* carryNode = new Node(carry);
            current->next = carryNode;
        }
    }

    return temp->next;

}

// Function to print linked list
void printList(Node*head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{

    Node *head1 = new Node(2);
    head1->next = new Node(4);
    head1->next->next = new Node(3);

    Node *head2 = new Node(5);
    head2->next = new Node(6);
    head2->next->next = new Node(7);

    Node* ans = addTwoNumbers(head1, head2);
    printList(ans);
    return 0;
}
