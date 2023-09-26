#include"sort.h"
/**
 * insertion_sort_list - Insertion sorts a doubly linked list of
 *			integers in ascending order
 * @list: integer doubly linked list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *unsorted = *list;
	listint_t *cur, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (unsorted != NULL)
	{
		cur = unsorted;
		unsorted = unsorted->next;
		if (sorted == NULL || cur->n < sorted->n)
		{
			cur->next = sorted;
			cur->prev = NULL;
			if (sorted != NULL)
				sorted->prev = cur;
			sorted = cur;
		}
		else
		{
			tmp = sorted;
			while (tmp->next != NULL && tmp->next->n < cur->n)
				tmp = tmp->next;

			cur->next = tmp->next;
			cur->prev = tmp;
			if (tmp->next != NULL)
				tmp->next->prev = cur;
			tmp->next = cur;
		}
	}
	*list = sorted;
}
