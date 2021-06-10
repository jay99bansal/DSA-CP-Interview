#include <bits/stdc++.h>
using namespace std;

/*
 * Author:  Jay Bansal
 * Date:    10 Jun 2021

 * File contains:
 * struct to represent a basic singly linked list with an integer as data
 * Function to Create a new node in a linked list
 * Function to initialze a linked list using a vector
 * Function to Display a Linked list
 * Functions to:
 *  - Rotate a linked list k positions to right
 *  - Rotate a linked list k positions to left
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


// Initialise a linked list using vector
// and return pointer to its head
struct Node* initLL(vector<int> &a) {
    if(a.size() == 0)
        return NULL;
    struct Node* head = createNode(a[0]);
    struct Node* trav = head;
    for(int i=1; i<a.size(); i++) {
        trav->next = createNode(a[i]);
        trav = trav->next;
    }
    return head;
}


// Rotate a linked list denoted by head pointer "head"
// by k positions to the right
struct Node* rotateKRightLL(struct Node* head, int k) {
    // Will do in class today
}


// Rotate a linked list denoted by head pointer "head"
// by k positions to the left
struct Node* rotateKLeftLL(struct Node* head, int k) {
    // Will do in class today
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
    vector<int> v {1,2,3,4,5,6};
    struct Node* head = initLL(v);
    displayLL(head);
    // 1 2 3 4 5 6


    return 0;
}

