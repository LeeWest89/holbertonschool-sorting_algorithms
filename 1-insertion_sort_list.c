#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers with
 *			Insertion sort
 *
 * @list: the doubly linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *c, *i, *temp;
	int v;

	if (!list || !(*list) || !((*list)->next))
		return;

	c = (*list)->next;

	while (c)
	{
		i = c->prev;
		v = c->n;

		while (i && i->n > v)
		{
			temp = i->prev;

			if (i->prev)
				i->prev->next = c;
			else
				(*list) = c;

			i->next = c->next;
			c->prev = i->prev;

			if (c->next)
				c->next->prev = i;

			i->prev = c;
			c->next = i;
			i = temp;
			print_list(*list);
		}
		c = c->next;
	}
}
