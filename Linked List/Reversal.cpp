#include <bits/stdc++.h>
using namespace std;

/*
 * Author:  Jay Bansal
 * Date:    5 Jun 2021

 * File contains:
 * struct to represent a basic singly linked list with an integer as data
 * Function to Create a new node in a linked list
 * Function to Insert a node to a Linked List
 * Function to Display a Linked list
 * Functions to:
 *  - Reverse a linked list using iteration
 *  - Reverse a linked list using recursive routine
 * 
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


// Iterative function to reverse a linked list
// denoted by head pointer "head"
struct Node* reverseIter(struct Node* head) {
    // Linked list contains 0 or 1 elements 
    if(head == NULL || head->next == NULL)
        return head;

    struct Node* prevPtr = NULL;
    struct Node* trav = head;

    // using head as a temporary variable to store pointers
    while(trav!=NULL) {
        head = trav->next;
        trav->next = prevPtr;
        prevPtr = trav;
        trav = head;
    }
    return prevPtr;
}


// Recursive function to reverse a linked list
// denoted by head pointer "head"
struct Node* reverseRecurs(struct Node* head) {
    // HW for Jun 6
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


// Test the functions
int main() {
    // Empty Linked List (Head is denoted by ptr "head")
    struct Node* head = NULL;

    head = insertAtEndLL(7, head);
    head = insertAtEndLL(3, head);
    head = insertAtEndLL(1, head);
    head = insertAtEndLL(5, head);
    displayLL(head);    // 7 3 1 5
    head = reverseIter(head);
    displayLL(head);    // 5 1 3 7
    head = reverseRecurs(head);
    displayLL(head);    // 5 1 3 7

    return 0;
}

