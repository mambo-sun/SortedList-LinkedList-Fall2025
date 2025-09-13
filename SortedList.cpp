
#include "SortedList.h"


template<class T>
SortedList<T>::SortedList() {
    head = nullptr;
    currentPos = nullptr;
    length = 0;
}

template<class T>
void SortedList<T>::MakeEmpty() {

}

template<class T>
bool SortedList<T>::IsFull() const {
    return false;
}

template<class T>
int SortedList<T>::GetLength() const {
    return length;
}


template<class T>
bool SortedList<T>::Contains(T someItem) {
    // Create a currN pointer and set it to head
    NodeT *currN = head;

    // Traverse the list
    // 2 cases: item is in the list, item is not in the list.
    while (currN != nullptr) {
        // Case when item is in the list
        if (currN->info == someItem) {
            return true;
        }
        // Case when item is not in the list.
        if (currN->info > someItem) {
            break;
        }
        // Check next item in the list.
        currN = currN->next;
    }
    return false;
}

template<class T>
void SortedList<T>::PutItem(T item) {

    NodeT *insertNode = new NodeT;
    insertNode->info = item;
    insertNode->next = nullptr;
    ++length;

    NodeT *currN = head;
    NodeT *prevN = nullptr;

    while (currN != nullptr) {
        if (item < currN->info) {
            insertNode->next = currN;
            break;
        }
        prevN = currN;
        currN = currN->next;
    }
    if (prevN != nullptr) {
        prevN->next = insertNode;
    } else {
        head = insertNode;
    }


    // // Create a node
    // NodeT *insertNode = new NodeT;
    // insertNode->info = item;
    // insertNode->next = nullptr;
    // ++length;
    //
    // // Create a currN pointer, pointing to head
    // NodeT* currN = head;
    // NodeT* prevN = nullptr;
    //
    // // Insert at beginning or into empty list
    // if (head == nullptr || item < head->info) {
    //     insertNode->next = head;
    //     head = insertNode;
    // }
    // else {
    //     NodeT* currN = head->next;
    //     NodeT* prevN = head;
    // }
    // while (currN != nullptr) {
    //     //Moving your pointers
    //     prevN = currN;
    //     currN = currN->next;
    //
    //     // This line of code Adds in between
    //     if (currN->info > item) {
    //         prevN->next = insertNode;
    //         insertNode->next = currN;
    //         return;
    //     }
    // }
    // if (prevN != nullptr) {
    //     prevN->next = insertNode;
    // }
    // else {
    //     head = insertNode;
    // }
    // prevN->next = insertNode;
}

template<class T>
void SortedList<T>::DeleteItem(T item) {

}

template<class T>
void SortedList<T>::ResetIterator() {

}

template<class T>
int SortedList<T>::GetNextItem() {

    return T();
}

