#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

/*void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}*/

void print_list(node_t *head){
	 node_t * current = head;

    while (current != NULL) {
        printf("Value: %d\n", current->val);
        printf("Address: %p\n", (void *)current->next);
        current = current->next;
    }
}

void push(node_t * head, int val) {

    node_t * current = head;

    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

void push_start(node_t ** head, int val) {

    node_t * new_node;
    new_node = malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}




int main() {

    node_t * head = NULL;
    head = malloc(sizeof(node_t));

    if (head == NULL) {
        return 1;
    }

    head->val = 1;
    head->next = malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = malloc(sizeof(node_t));
    head->next->next->val = 3;
    head->next->next->next = malloc(sizeof(node_t));
    head->next->next->next->val = 4;
    head->next->next->next->next = NULL;

	//print current list
    print_list(head);
	printf("\nList finished, adding new value 5...\n\n");

	//add "5" to the end
	push(head, 5);
	
	//print updated list
	print_list(head);
	
	// add 0 to start
    push_start(&head, 0);

    // print updated list
    print_list(head);

    return 0;

	
    
}