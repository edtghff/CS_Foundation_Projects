#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Define the Node struct and alias it as 'Node'
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Declare the functions that operate on Node
void insert(Node** head, int data);
void delete(Node** head, int key);
void printList(Node* head);

#endif
