#include <stdio.h>
#include <stdlib.h>

/*Define our node
 * it will contain data 
 * and a pointer to the next node
 */
typedef struct node {
	int data;
	struct node *next;
} node_t;

/* a fuction that will print a ll our data structure
 */

size_t print_list(const node_t *head)
{
	const node_t *current = head;
	size_t count = 0;
	/*traverse through the linked list*/
	while (current != NULL)
	{
		printf("%d", current->data);
		current = current->next;
		count++;
	}
	return count;
}

/* add a function for insertion at the end of a node
 */
node_t *add_node_at_the_end_of_list(node_t **head, const int data) {
	node_t *new_node = malloc(sizeof(node_t));/*allocate data for our new node*/
	/* check if the memory allocatio was successful, if unsuceessul return NULL*/
	if (new_node == NULL) {
		return NULL;
	}
	/* else if successful, set the data to the new node*/
	new_node->data = data;
	new_node->next = NULL;
	/* check if the list empty. its empty if head points to NULL */
	if(*head == NULL) {
		*head = new_node;
	} else {/*transverse the linked list if it was not empty to the last node*/
		node_t *current = *head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = new_node;
	}
	return new_node;
}

int main ()
{
	node_t *head;
	
	head = NULL;
	add_node_at_the_end_of_list(&head, 2);
	print_list(head);
	return (0);
}
