#include "sort.h"
/**
 * exchange_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @no_1: A pointer to the first node to swap.
 * @no_2: The second node to swap.
 */
void exchange_nodes(listint_t **h, listint_t **no_1, listint_t *no_2)
{
(*no_1)->next = no_2->next;
if (no_2 -> next != NULL)
no_2 -> next -> prev = *no_1;
no_2 -> prev = (*no_1) -> prev;
no_2 -> next = *no_1;
if ((*no_1) -> prev != NULL)
(*no_1) -> prev -> next = no_2;
else
*h = no_2;
(*no_1) -> prev = no_2;
*no_1 = no_2 -> prev;
}
/**
 * insertion_sort_list - Sorts a doubly linked list of integers using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *trav, *ins, *temp;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
for (trav = (*list) -> next; trav != NULL; trav = temp)
{
temp = trav -> next;
ins = trav -> prev;
while (ins != NULL && trav -> n < ins -> n)
{
exchange_nodes(list, &ins, trav);
print_list((const listint_t *)*list);
}
}
}
