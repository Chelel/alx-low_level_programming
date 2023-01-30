Singly Linked lists.

When and why using linked lists vs arrays.
How to build and use linked lists.

Linked List can be defined as collection of objects called nodes that are randomly stored in the memory.
A node contains two fields i.e. data stored at that particular address and the pointer which contains the address of the next node in the memory.
The last node of the list contains pointer to the null.


Uses of Linked List
The list is not required to be contiguously present in the memory. The node can reside any where in the memory and linked together to make a list.
This achieves optimized utilization of space.
list size is limited to the memory size and doesn't need to be declared in advance.
Empty node can not be present in the linked list.
We can store values of primitive types or objects in the singly linked list.


Why use linked list over array?
Array contains following limitations:
The size of array must be known in advance before using it in the program.
Increasing size of the array is a time taking process. It is almost impossible to expand the size of the array at run time.
All the elements in the array need to be contiguously stored in the memory. Inserting any element in the array needs
shifting of all its predecessors.
