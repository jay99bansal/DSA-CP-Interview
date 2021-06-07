#include <bits/stdc++.h>
using namespace std;

/*
 * Author:  Jay Bansal
 * Date:    7 Jun 2021

 * File contains:
 * struct to represent a basic singly linked list with an integer as data
 * Function to Create a new node in a linked list
 * Function to Insert a node to a Linked List
 * Function to count the elements in a linked list
 * Function to Display a Linked list
 * Functions to:
 *  - Find and display middle element in linked list
 *  - Delete middle element in linked list
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


// returns the number of nodes in the linked list
// denoted by head pointer "head"
int countNodesLL(struct Node* head) {
    struct Node* trav = head;
    int count = 0;
    while(trav != NULL) {
        count ++;
        trav = trav->next;
    }
    return count;
}


// O(n) algorithm to find and display middle element(s) 
// in a linked list denoted by head ptr "head"
void displayMiddleElement(struct Node* head) {
    // Will do in class today

}


// O(n) algorithm to find and display middle element(s) 
// in a linked list denoted by head ptr "head"
// in one pass
void displayMiddleElement2(struct Node* head) {
    // Will do in class today

}

// O(n) algorithm to delete middle element(s) 
// in a linked list denoted by head ptr "head"
// in one pass
struct Node* deleteMiddleElement(struct Node* head) {
    // HW for Jun 8

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
    
    
    return 0;
}

