// This file is made for sole purpose of practise and nothing else in mind that at this point of time happens to be linked list.
#include<iostream>
using namespace std;

class node{
    public:
        int num;
        node* next;
};

void print(node* n)
{
    while(n != NULL)
    {
        cout << n->num << " " ;
        n = n->next;
    }
}

void push(node** head_ref, int new_data)
{
    node* new_node = new node();

    
    
}

int main()
{



    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->num = 10;
    head->next = second;

    second->num = 20;
    second->next = third;

    third->num = 30;
    third->next = NULL;

    cout << (second->next)->num;

    cout << "\n A function to print the nodes is called below :\n";
    print(head);

    return 0;
}