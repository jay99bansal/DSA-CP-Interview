#include <bits/stdc++.h>
using namespace std;

/*
 * Author:  Jay Bansal
 * Date:    8 Jun 2021

 * File contains:
 * struct to represent a basic singly linked list with an integer as data
 * Function to Create a new node in a linked list
 * Function to initialze a linked list using a vector
 * Function to Insert a node to a Linked List
 * Function to Display a Linked list
 * Functions to:
 *  - Detect loops in a linked list (two methods)
 *  - Detect and remove loops in a linked list (two methods)
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


// Detect loops in a linked list
// denoted by head pointer "head"
bool detectLoopsLL(struct Node* head) {
    unordered_set<struct Node*> visited;
    struct Node* trav = head;
    while(trav!=NULL) {
        // Loop found
        if(visited.find(trav) != visited.end()) 
            return true;
        visited.insert(trav);
        trav = trav->next;
    }
    // Loop not found
    return false;
}


// Detect loops in a linked list
// denoted by head pointer "head"
// without using extra space
bool detectLoopsLL2(struct Node* head) {
    struct Node* trav1 = head, *trav2 = head;
    // trav1 - slow pointer
    // trav2 - fast fointer

    while(trav2 != NULL && trav2->next != NULL) {
        trav1 = trav1->next;
        trav2 = trav2->next->next;
        // loop detected
        if(trav1 == trav2)
            return true;
    }
    // no loop detected
    return false;
}


// Detect and remove all loops in a linked list
// denoted by head pointer "head"
void removeLoopsLL(struct Node* head) {
    // Will do in class today
}


// Detect and remove all loops in a linked list
// denoted by head pointer "head"
// in one pass of Linked list
void removeLoopsLL2(struct Node* head) {
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
    cout << detectLoopsLL2(head) << endl;
    
    // Adding a loop in linked list
    head->next->next->next->next->next->next = head->next->next;
    cout << detectLoopsLL2(head) << endl;
    displayLL(head);


    return 0;
}

