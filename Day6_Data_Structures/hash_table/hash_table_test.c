#include <stdio.h>
#include "hash_table.h"

int main() {
    // Initialize an empty hash table
    HashTable ht = { {NULL} };  // Array of NULL pointers initially

    // Insert some key-value pairs
    insert(&ht, "apple", 10);
    insert(&ht, "banana", 20);
    insert(&ht, "grape", 30);

    // Test search function
    printf("Value for key 'apple': %d\n", search(&ht, "apple"));
    printf("Value for key 'banana': %d\n", search(&ht, "banana"));

    // Test removeEntry function
    removeEntry(&ht, "banana");  // Changed from delete to removeEntry
    printf("After removing 'banana', search for 'banana': %d\n", search(&ht, "banana"));  // Should return -1

    return 0;
}
