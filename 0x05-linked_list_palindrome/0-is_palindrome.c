#include "lists.h"

/**
 * is_palindrome - prints all elements of a listint_t list
 * @head: pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/
int is_palindrome(listint_t **head)
{
	/*listint_t *h;*/
	int palindrome[1024];
	int i, j, n = 0;

	if (*head == NULL)
		return (1);

	while (*head != NULL)
	{
		palindrome[n] = (*head)->n;
		n++;
		*head = (*head)->next;
	}

	for (i = 0, j = n - 1 ; i != (n / 2); i++, j--)
	{
		if (palindrome[i] != palindrome[j])
			return (0);
	}

	return (1);
}
