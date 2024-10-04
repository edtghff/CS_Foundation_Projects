#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_table.h"

// Simple hash function that converts a string key to an index
unsigned int hash(char* key) {
    unsigned long int value = 0;
    unsigned int i = 0;
    unsigned int key_len = strlen(key);

    // Generate a basic hash using a multiplier and key's characters
    for (; i < key_len; ++i) {
        value = value * 37 + key[i];
    }

    return value % TABLE_SIZE;  // Return the index within the hash table's bounds
}

// Insert a new key-value pair into the hash table
void insert(HashTable* ht, char* key, int value) {
    unsigned int index = hash(key);  // Get the index for the key
    Entry* newEntry = (Entry*)malloc(sizeof(Entry));  // Create a new entry
    newEntry->key = strdup(key);  // Copy the key to avoid using the same pointer
    newEntry->value = value;
    newEntry->next = ht->entries[index];  // Insert at the head of the list (chaining)
    ht->entries[index] = newEntry;  // Set the new entry as the first one at that index
}

// Search for a key in the hash table and return its associated value
int search(HashTable* ht, char* key) {
    unsigned int index = hash(key);  // Get the index for the key
    Entry* entry = ht->entries[index];  // Access the linked list at that index

    while (entry != NULL) {
        if (strcmp(entry->key, key) == 0) {
            return entry->value;  // Key found, return the value
        }
        entry = entry->next;  // Move to the next entry in the chain
    }

    return -1;  // Key not found
}

// Delete a key-value pair from the hash table
void removeEntry(HashTable* ht, char* key) {  // Changed from delete to removeEntry
    unsigned int index = hash(key);  // Get the index for the key
    Entry* entry = ht->entries[index];
    Entry* prev = NULL;

    while (entry != NULL && strcmp(entry->key, key) != 0) {
        prev = entry;
        entry = entry->next;  // Traverse the chain to find the key
    }

    if (entry == NULL) return;  // Key not found

    if (prev == NULL) {
        // Key is the first entry in the list
        ht->entries[index] = entry->next;
    } else {
        // Key is in the middle or end of the list
        prev->next = entry->next;
    }

    free(entry->key);  // Free the allocated memory for the key
    free(entry);  // Free the entry itself
}
