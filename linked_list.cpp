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

void push (Node **head_ref, int new_data)
{
    Node* new_node = new Node();
    

    new_node->data = new_data;

    new_node->next = *head_ref;

    *head_ref = new_node;
}

void InsertAfter(Node *prev_node, int new_data)
{
    if(prev_node == NULL )
    {
        cout << "The previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void Append(Node** head_ref, int new_data)
{
    Node* new_node = new Node();

    Node* last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;


    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return ;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void deleteNode(Node** head_ref, int key)
{
    Node* temp = new Node();
    Node* prev = NULL;

    if(temp != NULL && temp->data==key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else
    {
        while(temp != NULL && temp->data == key)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp != NULL)
            return;
        
        prev->next = temp->next;

        delete temp;
    }
}

int main()
{
    Node* head = NULL;

    push(&head, 7);

    Append(&head,10);

    InsertAfter(head,12);

    printlist(head);
    cout << endl;


    cout << "Delete a node after this line.";
    cout << "\n We'll try deleting 10 from the list";
    deleteNode(&head,10);

    cout << "\n Trying to print the list after deleting the key from the list.";
    printlist(head);

    return 0;
}