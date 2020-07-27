#include "lists.h"
/**
* insert_node - inserts a number into a sorted singly linked list
* @head: head of list
* @number: number to be included in new node
* Return: address of the new node or NULL if it failed
**/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = NULL, *prevNode = NULL, *currentNode = NULL;

	/* assign memory */
	new = malloc(sizeof(listint_t));

	/*validate if memory was assigned*/
	if (new == NULL)
		return (NULL);
	/*assing values*/
	new->n = number;
	new->next = NULL;

	/*temp pointers*/
	prevNode = NULL;
	currentNode = *head;
	while (currentNode != NULL && number > currentNode->n)
	{
		prevNode = currentNode;
		currentNode = currentNode->next;
	}
	if (prevNode == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		prevNode->next = new;
		new->next = currentNode;
	}

	return (new);
}
