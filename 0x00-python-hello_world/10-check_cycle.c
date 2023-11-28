#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycles - check the cycles
 * @list: the list to check
 * Return: 1 if cycle is, 0 otherwise
 *
 */

int check_cycles(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}
	return (0);
}
