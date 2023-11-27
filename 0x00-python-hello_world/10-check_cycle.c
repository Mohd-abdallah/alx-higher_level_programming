include "lists.h"

/**
 * check_cycle - a function in C that checks if a singly linked list
 * has a cycle in it.
 * @list: list.
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle.
*/

int check_cycle(listint_t *list)
{
	listint_t *slw = list, *fst = list;

	if (list == NULL || list->next == NULL)
	{
		return (0);
	}
	while (fst && fst->next)
	{
		if (slw == fst)
		{
			return (1);
		}
		slw = slw->next;
		fst = fst->next->next;
	}
	return (0);
}
