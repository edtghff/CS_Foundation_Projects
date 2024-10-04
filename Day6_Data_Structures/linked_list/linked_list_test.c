#include <stdio.h>
#include "linked_list.h"  // Include the header for the Node and functions

int main() {
    Node* head = NULL;  // Initialize the head pointer as NULL

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    printf("Linked List: ");
    printList(head);

    delete(&head, 20);
    printf("After Deleting 20: ");
    printList(head);

    return 0;
}
