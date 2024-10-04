#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#define TABLE_SIZE 10

// Define the Entry struct
typedef struct Entry {
    char* key;
    int value;
    struct Entry* next;  // For handling collisions with chaining
} Entry;

// Define the HashTable struct, which contains an array of Entry pointers
typedef struct HashTable {
    Entry* entries[TABLE_SIZE];  // Array of pointers to Entry nodes (chained lists)
} HashTable;

// Declare the functions that will operate on the hash table
unsigned int hash(char* key);
void insert(HashTable* ht, char* key, int value);
int search(HashTable* ht, char* key);
void removeEntry(HashTable* ht, char* key);  // Changed from delete to removeEntry

#endif
