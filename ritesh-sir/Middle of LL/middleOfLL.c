#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

static int findMid(struct Node* head)
{
	struct Node* slow = head;
	struct Node* fast = head;
    
	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow->data;
}

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
	struct Node* head = NULL;

	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 85);

    printf("The Middle of the Linked List is: %d\n", findMid(head));
    
    return 0;
}
