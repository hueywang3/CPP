#ifndef H_doublyLinkedList
#define H_doublyLinkedList

//Definition of the node
template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *next;
    nodeType<Type> *back;
};

template <class Type>
class doublyLinkedList
{
public:
    //Overload the assignment operator.
    const doublyLinkedList<Type> &operator=(const doublyLinkedList<Type> &);

    //Function to initialize the list to an empty state.
    //Postcondition: first = nullptr; last = nullptr;
    //               count = 0;
    void initializeList();

    //Function to determine whether the list is empty.
    //Postcondition: Returns true if the list is empty,
    //               otherwise returns false.
    bool isEmptyList() const;

    //Function to delete all the nodes from the list.
    //Postcondition: first = nullptr; last = nullptr;
    //               count = 0;
    void destroy();

    //Function to output the info contained in each node.
    void print() const;

    //Function to output the info contained in each node
    //in reverse order.
    void reversePrint() const;

    //Function to return the number of nodes in the list.
    //Postcondition: The value of count is returned.
    int length() const;

    //Function to return the first element of the list.
    //Precondition: The list must exist and must be nonempty.
    //Postcondition: If the list is empty, the program
    //               terminates; otherwise, the first
    //               element of the list is returned.
    Type front() const;

    //Function to return the last element of the list.
    //Precondition: The list must exist and must be nonempty.
    //Postcondition: If the list is empty, the program
    //               terminates; otherwise, the last
    //               element of the list is returned.
    Type back() const;

    //Function to determine whether searchItem is in the list.
    //Postcondition: Returns true if searchItem is found in
    //               the list, otherwise returns false.
    bool search(const Type &searchItem) const;

    //Function to insert insertItem in the list.
    //Precondition: If the list is nonempty, it must be in
    //              order.
    //Postcondition: insertItem is inserted at the proper place
    //               in the list, first points to the first
    //               node, last points to the last node of the
    //               new list, and count is incremented by 1.
    void insert(const Type &insertItem);

    //Function to delete deleteItem from the list.
    //Postcondition: If found, the node containing deleteItem
    //               is deleted from the list; first points
    //               to the first node of the new list, last
    //               points to the last node of the new list,
    //               and count is decremented by 1; otherwise,
    //               an appropriate message is printed.
    void deleteNode(const Type &deleteItem);

    //default constructor
    //Initializes the list to an empty state.
    //Postcondition: first = nullptr; last = nullptr;
    //               count = 0;
    doublyLinkedList();

    //copy constructor
    doublyLinkedList(const doublyLinkedList<Type> &otherList);

    //destructor
    //Postcondition: The list object is destroyed.
    ~doublyLinkedList();

protected:
    int count;
    nodeType<Type> *first; //pointer to the first node
    nodeType<Type> *last;  //pointer to the last node

private:
    //Function to make a copy of otherList.
    //Postcondition: A copy of otherList is created and
    //               assigned to this list.
    void copyList(const doublyLinkedList<Type> &otherList);
};

#include "doublyLinkedListImpl.inl"

#endif
