#include "lists.h"

/**
 * is_palindrome - checks if a linked list is a palindrome
 *
 * @head: the head address of the linked list
 *
 * Return: 1 if it's a palindrome, 0 else
 */

int is_palindrome(listint_t **head)
{
	listint_t *cur = *head;
	int tab[2048], n = 0, j = 0;

	if (*head)
	{
		while (cur)
		{
			tab[n] = cur->n;
			cur = cur->next;
			n++;
		}

		while (j < i / 2)
		{
			if (tab[j] == tab[i - j - 1])
				j++;
			else
				return (0);
		}
	}
	return (1);
}
