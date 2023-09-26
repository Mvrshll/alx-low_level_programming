#include "lists.h"

/**
 * find_listint_loop - ifunction that finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hot = head;
	listint_t *cold = head;

	if (!head)
		return (NULL);

	while (hot && cold && cold->next)
	{
		cold = cold->next->next;
		hot = hot->next;
		if (cold == hot)
		{
			hot = head;
			while (hot != cold)
			{
				hot = hot->next;
				cold = cold->next;
			}
			return (cold);
		}
	}

	return (NULL);
}
