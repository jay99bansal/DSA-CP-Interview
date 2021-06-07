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
 *  - Merge two sorted linked lists in O(n) by creating a new linked list
 *  - Merge two sorted linked lists in O(n) using inplace merging
 *      (without extra space)
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


// O(n) algorithm to merge two sorted linked lists
// with extra space of O(n), creating a new linked list
// and returning pointer to it!
struct Node* mergeSortedLL(struct Node* head1, struct Node* head2) {
    struct Node* newLL = NULL;
    struct Node* trav1 = head1;
    struct Node* trav2 = head2;
    struct Node* travNew = newLL;
    /*
    // O(n^2)
    while(trav1!=NULL && trav2!=NULL) {
        if(trav1->data <= trav2->data) {
            newLL = insertAtEndLL(trav1->data, newLL); // O(n)
        }    
    }
    */
    // O(n)
    struct Node* temp;
    while(trav1!=NULL && trav2!=NULL) {
        if(trav1->data <= trav2->data) {
            temp = createNode(trav1->data);
            trav1 = trav1->next;
        }
        else {
            temp = createNode(trav2->data);
            trav2 = trav2->next;
        }
        if(newLL == NULL) {
            newLL = temp;
            travNew = temp;
        }
        else {
            travNew->next = temp;
            travNew = temp;
        }
    }
    while(trav1!=NULL) {
        temp = createNode(trav1->data);
        trav1 = trav1->next;
        if(newLL == NULL) {
            newLL = temp;
            travNew = temp;
        }
        else {
            travNew->next = temp;
            travNew = temp;
        }
    }
    while(trav2!=NULL) {
        temp = createNode(trav2->data);
        trav2 = trav2->next;
        if(newLL == NULL) {
            newLL = temp;
            travNew = temp;
        }
        else {
            travNew->next = temp;
            travNew = temp;
        }
    }
    return newLL;
}


// O(n) INPLACE algorithm to merge two sorted linked lists
// denoted by head pointers "head1" and "head2"
struct Node* mergeSortedInplaceLL(struct Node* head1, struct Node* head2) {
    // HW for 7th June 

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
    struct Node* head1 = NULL;
    head1 = insertAtEndLL(1, head1);
    head1 = insertAtEndLL(3, head1);
    head1 = insertAtEndLL(3, head1);
    head1 = insertAtEndLL(5, head1);
    // 1 3 3 5

    struct Node* head2 = NULL;
    head2 = insertAtEndLL(0, head2);
    head2 = insertAtEndLL(3, head2);
    head2 = insertAtEndLL(4, head2);
    head2 = insertAtEndLL(6, head2);
    // 0 3 4 6

    struct Node* head3 = mergeSortedLL(head1, head2);
    displayLL(head3);
    // 0 1 3 3 3 4 5 6

    
    return 0;
}

