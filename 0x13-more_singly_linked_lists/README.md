# 0x13. C - More singly linked lists

# Learning Objectives
At the end of this project, you are expected to be able to `explain to anyone`, without the help of Google:

## General
How to use linked lists
Start to look for the right source of information without too much help

# Tasks

# More Info
Please use this data structure for this project:

```C
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
## 0. Print list
Write a function that prints all the elements of a `listint_t` list.

* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* Format: see example
* You are allowed to use `printf`

## 1. List length

Write a function that returns the number of elements in a linked listint_t list.

* Prototype:` size_t listint_len(const listint_t *h);`

## 2. Add node
Write a function that adds a new node at the beginning of a `listint_t` list.

* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

## 3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.

* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

## 4. Free list
Write a function that frees a listint_t list.

* Prototype: `void free_listint(listint_t *head);`

## 5. Free
Write a function that frees a `listint_t` list.

* Prototype: `void free_listint2(listint_t **head);`
* The function sets the `head` to `NULL`

## 6. Pop
Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).

* Prototype: `int pop_listint(listint_t **head);`
* if the linked list is empty return `0`

## 7. Get node at index
Write a function that returns the nth node of a `listint_t` linked list.

* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
* where `index` is the index of the node, starting at `0`
* if the node does not exist, return `NULL`
