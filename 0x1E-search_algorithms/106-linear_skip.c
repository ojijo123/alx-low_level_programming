#include "search_algos.h"

/**
 * linear_skip - skip search singular linked list
 * @list: pointer to the head node
 * @value: value to search for
 *
 * Return: the node found otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *last = list;

	if (!list)
		return (NULL);

	while (list->n < value)
	{
		if (!list->express)
			break;
		last = list;
		list = list->express;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	if (list->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				last->index, list->index);
		list = last;
	}
	else
	{
		for (last = list; last->next; last = last->next)
			;
		printf("Value found between indexes [%lu] and [%lu]\n",
				list->index, last->index);
	}
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
