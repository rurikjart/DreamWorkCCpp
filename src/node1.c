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

    print_list(head);

    return 0;
}