#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void printlist(Node *n)
{
    while(n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

// pushing the data infront of the list
void push (Node **head_ref, int new_data)
{
    // alloting a new node for the push operation
    Node* new_node = new Node();
    

    // entering the data provided in the newly created node
    new_node->data = new_data;

    // the new node becomes the new head 
    new_node->next = *head_ref;

    // the address of the head_ref is changed from NULL to address of new_node
    *head_ref = new_node;
}

int main()
{
    // This file is created to practice the first of the linked list using GFG.
    Node* head = NULL;

    push(&head, 7);

    printlist(head);
    cout << endl;
    return 0;
}