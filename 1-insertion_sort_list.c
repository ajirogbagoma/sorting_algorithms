#include "sort.h"

/**
 * insertion_sort_list - Sorts a list of integers
 *
 * @list: The list to be sorted
 *
 * Return: The sorted list
 */

void insertion_sort_list(listint_t **list)
{


	listint_t *current, *past;


	if (!list || !*list)
	{
		return;
	}
	current = *list;
	current = current->next;

	while (current)
	{
		while (current->prev && (current->n) < (current->prev->n))
		{
			past = current->prev;
			if (current->next)
				(current->next)->prev = past;

			if (past->prev)
			{
				past->prev->next = current;
			}
			else
			{
				*list = current;
			}
			past->next = current->next;
			current->prev = past->prev;
			past->prev = current;
			current->next = past;
			print_list(*list);
		}
		current = current->next;
	}
}
