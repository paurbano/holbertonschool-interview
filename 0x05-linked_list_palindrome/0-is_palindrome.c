#include "lists.h"

/**
 * is_palindrome - prints all elements of a listint_t list
 * @head: pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/
int is_palindrome(listint_t **head)
{
	/*listint_t *h;*/
	int palindrome[2048];
	int i, j, num = 0;

	if ((*head) == NULL || head == NULL)
		return (1);

	if ((*head)->next == NULL)
		return (1);

	while (*head != NULL)
	{
		palindrome[num] = (*head)->n;
		num++;
		*head = (*head)->next;
	}

	for (i = 0, j = num - 1 ; i < (num / 2); i++, j--)
	{
		if (palindrome[i] != palindrome[j])
			return (0);
	}

	return (1);
}
