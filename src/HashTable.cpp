#include "HashTable.h"
#include <iostream>

HashTable::HashTable()
{
    //ctor
}

void HashTable::initializeTable() {
    for (int i = 0; i < 10; i++) {
        hashTable[i] = NULL;
    }
}

int HashTable::hashSum(std::string x, int s) {
    int sum = 0;
    for (int i = 0; i < x.length(); i++) {
        sum = sum + x[i];
    }
    sum = sum % s;
    return sum;
}

void HashTable::deleteMovie(std::string name) {
    int index = hashSum(name, 10);
    if (hashTable[index] != NULL) {
        HashElem *tmp = hashTable[index];
        while (tmp -> next != NULL) {
            if (tmp -> title == name) {
                break;
            }
            tmp = tmp -> next;
        }
        if (tmp -> previous != NULL) {
            tmp -> previous -> next = tmp -> next;
            tmp -> next -> previous = tmp -> previous;
            delete tmp;
        }
        else {
            hashTable[index] = NULL;
        }
    }
}

void HashTable::findMovie(std::string name) {
    int index = hashSum(name, 10);
    HashElem *tmp = hashTable[index];
    int found = 0;
    while (tmp != NULL) {
        if (tmp -> title == name) {
            std::cout << index << ":";
            std::cout << tmp -> title << ":" << tmp -> year << std::endl;
            found++;
            break;
        }
        tmp = tmp -> next;
    }
    if (found == 0) {
        std::cout << "not found" << std::endl;
    }
}

void HashTable::printTableContents() {
    int counter = 0;
    for (int i = 0; i < 10; i++) {
        if (hashTable[i] != NULL) {
            counter++;
            HashElem *tmp = hashTable[i];
            while (tmp != NULL) {
                std::cout << tmp -> title << ":" << tmp -> year << std::endl;
                tmp = tmp -> next;
            }
        }
    }
    if (counter == 0) {
        std::cout << "empty" << std::endl;
    }
}

void HashTable::insertMovie(std::string name, int year) {
    int index = hashSum(name, 10); //what do i use as tablesize?
    HashElem *hashElement = new HashElem(name, year);
    if (hashTable[index] == NULL) {
        //hashElement->previous = hashTable[index]; //something wrong with pointers here?
        hashTable[index] = hashElement;
    }
    else {
        HashElem *tmp = hashTable[index];
        while (tmp->next != NULL) {
            if (tmp->title == name) {
                //break;
            }
            tmp = tmp -> next;
        }
        hashElement -> previous = tmp;
        tmp->next = hashElement;
    }
}

HashTable::~HashTable()
{
    //dtor
}
