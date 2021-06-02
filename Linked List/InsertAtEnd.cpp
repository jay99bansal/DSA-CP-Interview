#include <bits/stdc++.h>
using namespace std;

/*
 * Author - Jay Bansal
 * Date - Jun 3 2021

 * File containing functions to -
 * Create a new node in a linked list
 * Insert a node to a Linked List
 * Display a Linked list
 */


// The structure Node containing data and ptr to next node
struct Node {
    int data;
    struct Node* next;
};


// Routine to allocate memory required for a Node, set its value
// and return pointer to this newly allocated memory
struct Node* createNode(int val) {
    struct Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}


// Function to enter a node with data "val" at the 
// end of a linked list with head pointer at "head"
struct Node* insertAtEndLL(int val, struct Node* head) {
    struct Node* newNode = createNode(val);

    if(head == NULL)
        return newNode;

    struct Node* trav = head;
    while(trav->next != NULL)
        trav = trav->next;
    trav->next = newNode;
    return head;
}


// Function to display a linked list with head pointer "head"
void displayLL(struct Node* head) {
    struct Node* trav = head;
    while(trav != NULL) {
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;
}


int main() {
    // Empty Linked List (Head is denoted by ptr "head")
    struct Node* head = NULL;

    // Insert elements 3, 7, 1 and 5 to linked list
    head = insertAtEndLL(3, head);
    head = insertAtEndLL(7, head);
    head = insertAtEndLL(1, head);
    head = insertAtEndLL(5, head);

    // Display the contents of the linked list
    displayLL(head);
    return 0;
}

