#include "sort.h"

/**
 * insertion_sort_list - this function sorts a doubly linked list
 * based on the Insertion Sort Algorithm.
 * @list: the list to be sorted
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *aux, *temp, *next;

	if (!list)
		return;

	curr = *list;
	while (curr != NULL)
	{
		next = curr->next;
		aux = curr->prev;
		while (aux != NULL && aux->n > curr->n)
		{
			temp = curr->next;
			aux->next = temp;

			if (temp != NULL)
				temp->prev = aux;

			temp = aux->prev;
			aux->prev = curr;
			curr->next = aux;
			curr->prev = temp;

			if (temp == NULL)
				*list = curr;
			else
				temp->next = curr;
			aux = temp;
			print_list(*list);
		}
		curr = next;
	}
}
