#ifndef H_orderedListType
#define H_orderedListType

#include "chapter16/linkedList/linkedList.h"

template <class Type>
class orderedLinkedList : public linkedListType<Type>
{
public:
    //Function to determine whether searchItem is in the list.
    //Postcondition: Returns true if searchItem is in the
    //               list, otherwise it returns false.
    bool search(const Type &searchItem) const;

    //Function to insert newItem in the list.
    //Postcondition: first points to the new list, newItem
    //               is inserted at the proper place in the
    //               list, and count is incremented by 1.
    void insert(const Type &newItem);

    //Function to insert newItem in the list.
    //Because the resulting list must be sorted, newItem is
    //inserted at the proper in the list.
    //This function uses the function insert to insert newItem.
    //Postcondition: first points to the new list, newItem is
    //               inserted at the proper in the list,
    //               and count is incremented by 1.
    void insertFirst(const Type &newItem);

    //Function to insert newItem in the list.
    //Because the resulting list must be sorted, newItem is
    //inserted at the proper in the list.
    //This function uses the function insert to insert newItem.
    //Postcondition: first points to the new list, newItem is
    //               inserted at the proper in the list,
    //               and count is incremented by 1.
    void insertLast(const Type &newItem);

    //Function to delete deleteItem from the list.
    //Postcondition: If found, the node containing
    //               deleteItem is deleted from the list;
    //               first points to the first node of the
    //               new list, and count is decremented by 1.
    //               If deleteItem is not in the list, an
    //               appropriate message is printed.
    void deleteNode(const Type &deleteItem);
};

#include "chapter16/orderedLinkedList/orderedLinkedList.inl"

#endif