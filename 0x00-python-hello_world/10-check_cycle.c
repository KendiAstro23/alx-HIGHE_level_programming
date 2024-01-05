#include "lists.h"

/**
 * check_cycle - looks for a circle in a linked list
 * @list: variable to be checked
 * Return: 1 for circle present, 0 for no circle checked
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
