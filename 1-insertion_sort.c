#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *aux, *temp, *next;

	curr = (*list)->next;

	while (curr != NULL)
	{
		next = curr->next;

		aux = *list;
		while (aux->next && aux->n > curr->n)
		{
			temp = aux->prev;
			aux->next = curr->next;
			(curr->next)->prev = aux;
			aux->prev = curr;
			curr->next = aux;
			
			if (temp == NULL)
			{
				curr->prev = NULL;
				*list = curr;
			} else
			{
				temp->next = curr;
				curr->prev = temp;
			}
		}
		
		print_list(*list);
		curr = next;
	}
}
