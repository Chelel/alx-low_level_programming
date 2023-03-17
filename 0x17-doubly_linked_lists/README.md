C - Doubly Linked Lists

A doubly linked list is different from a singly linked list in a way that each node has an extra pointer
pointing to the previous node, together with the next pointer and data similar to the singly linked list.

A DLL can be traversed in both forward and backward directions. 
The delete operation in DLL is more efficient if a pointer to the node to be deleted is given. 
We can quickly insert a new node before a given node. 
In a singly linked list, to delete a node, a pointer to the previous node is needed.
To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using the previous pointer.

Structure of a node in a doubly-linked list in C:

struct node   
{  
    struct node *prev;   
    int data;  
    struct node *next;   
}


Operations on a doubly-linked list:
Node Creation:
{  
    struct node *prev;  
    int data;  
    struct node *next;  
};  
struct node *head;



The other operations of the doubly linked list are described below.

SN	Operation	Uses
1	Insertion at beginning	To add a node at the beginning of a linked list.
2	Insertion at end	To add a node at the end of a linked list.
3	Insertion after specified node	To add a node in a linked list after the specified node.
4	Deletion at beginning	To remove a node from the beginning of a linked list.
5	Deletion at the end	To remove a node from the end of a linked list.
6	Deletion of the node having given data	To remove a node which is present just after the node containing the given data.
7	Searching	To compare each node data with the item to be searched. It returns the location of the item in the list, if the item is found. Else it returns null.
8	Traversing	To visit each node of a linked list at least once, in order to perform some specific operation like searching, sorting, display, etc.



