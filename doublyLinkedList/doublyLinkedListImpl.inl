#include "doublyLinkedList.h"
#include <iostream>

using namespace std;

template <class Type>
doublyLinkedList<Type>::doublyLinkedList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

template <class Type>
bool doublyLinkedList<Type>::isEmptyList() const
{
    return (first == nullptr);
}

template <class Type>
void doublyLinkedList<Type>::destroy()
{
    nodeType<Type> *temp; //pointer to delete the node

    while (first != nullptr)
    {
        temp = first;
        first = first->next;
        delete temp;
    }

    last = nullptr;
    count = 0;
}

template <class Type>
void doublyLinkedList<Type>::initializeList()
{
    destroy();
}

template <class Type>
int doublyLinkedList<Type>::length() const
{
    return count;
}

template <class Type>
void doublyLinkedList<Type>::print() const
{
    nodeType<Type> *current; //pointer to traverse the list

    current = first; //set current to point to the first node

    while (current != nullptr)
    {
        cout << current->info << "  "; //output info
        current = current->next;
    } //end while
} //end print

template <class Type>
void doublyLinkedList<Type>::reversePrint() const
{
    nodeType<Type> *current; //pointer to traverse
                             //the list

    current = last; //set current to point to the
                    //last node

    while (current != nullptr)
    {
        cout << current->info << " ";
        current = current->back;
    } //end while
} //end reversePrint

template <class Type>
bool doublyLinkedList<Type>::
    search(const Type &searchItem) const
{
    bool found = false;
    nodeType<Type> *current; //pointer to traverse the list

    current = first;

    while (current != nullptr && !found)
        if (current->info >= searchItem)
            found = true;
        else
            current = current->next;

    if (found)
        found = (current->info == searchItem); //test for
                                               //equality

    return found;
} //end search

template <class Type>
Type doublyLinkedList<Type>::front() const
{
    assert(first != nullptr);

    return first->info;
}

template <class Type>
Type doublyLinkedList<Type>::back() const
{
    assert(last != nullptr);

    return last->info;
}

template <class Type>
void doublyLinkedList<Type>::insert(const Type &insertItem)
{
    nodeType<Type> *current;      //pointer to traverse the list
    nodeType<Type> *trailCurrent; //pointer just before current
    nodeType<Type> *newNode;      //pointer to create a node
    bool found;

    newNode = new nodeType<Type>; //create the node
    newNode->info = insertItem;   //store the new item in the node
    newNode->next = nullptr;
    newNode->back = nullptr;

    if (first == nullptr) //if the list is empty, newNode is
                          //the only node
    {
        first = newNode;
        last = newNode;
        count++;
    }
    else
    {
        found = false;
        current = first;

        while (current != nullptr && !found) //search the list
            if (current->info >= insertItem)
                found = true;
            else
            {
                trailCurrent = current;
                current = current->next;
            }

        if (current == first) //insert newNode before first
        {
            first->back = newNode;
            newNode->next = first;
            first = newNode;
            count++;
        }
        else
        {
            //insert newNode between trailCurrent and current
            if (current != nullptr)
            {
                trailCurrent->next = newNode;
                newNode->back = trailCurrent;
                newNode->next = current;
                current->back = newNode;
            }
            else
            {
                trailCurrent->next = newNode;
                newNode->back = trailCurrent;
                last = newNode;
            }

            count++;
        } //end else
    }     //end else
} //end insert

template <class Type>
void doublyLinkedList<Type>::deleteNode(const Type &deleteItem)
{
    nodeType<Type> *current;      //pointer to traverse the list
    nodeType<Type> *trailCurrent; //pointer just before current

    bool found;

    if (first == nullptr)
        cout << "Cannot delete from an empty list." << endl;
    else if (first->info == deleteItem) //node to be deleted is
                                        //the first node
    {
        current = first;
        first = first->next;

        if (first != nullptr)
            first->back = nullptr;
        else
            last = nullptr;

        count--;

        delete current;
    }
    else
    {
        found = false;
        current = first;

        while (current != nullptr && !found) //search the list
            if (current->info >= deleteItem)
                found = true;
            else
                current = current->next;

        if (current == nullptr)
            cout << "The item to be deleted is not in "
                 << "the list." << endl;
        else if (current->info == deleteItem) //check for
                                              //equality
        {
            trailCurrent = current->back;
            trailCurrent->next = current->next;

            if (current->next != nullptr)
                current->next->back = trailCurrent;

            if (current == last)
                last = trailCurrent;

            count--;
            delete current;
        }
        else
            cout << "The item to be deleted is not in list."
                 << endl;
    } //end else
} //end deleteNode

template <class Type>
void doublyLinkedList<Type>::copyList(const doublyLinkedList<Type> &otherList)
{
    cout << "The definition of this function is left as an exercise." << endl;
    cout << "See Programming Execrise 11." << endl;
}

template <class Type>
doublyLinkedList<Type>::doublyLinkedList(const doublyLinkedList<Type> &otherList)
{
    cout << "The definition of the copy constructor is left as an exercise." << endl;
    cout << "See Programming Execrise 11." << endl;
}

template <class Type>
const doublyLinkedList<Type> &doublyLinkedList<Type>::operator=(const doublyLinkedList<Type> &)
{
    cout << "Overloading the assignment operator is left as an exercise." << endl;
    cout << "See Programming Execrise 11." << endl;
}

template <class Type>
doublyLinkedList<Type>::~doublyLinkedList()
{
    cout << "Definition of the destructor is left as an exercise." << endl;
    cout << "See Programming Execrise 11." << endl;
}
