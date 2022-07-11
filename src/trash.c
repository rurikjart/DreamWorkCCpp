typedef struct Element {
	struct Element *next;
	void *data
} Element;

void push (Element *stack, void *data);
void *pop (Element *stack);

void push (Element **stack, void *data);
void *pop (Element **stack);

bool createStack(Element ** stack){
	*stack = NULL;
	return true;
}

bool push(Element **stack, void *data) {
	Element *elem = malloc(sizeof(Element));
	if (!elem) return false;
	
	
	elem->data = data;
	elem->next = *stack;
	*stack = elem;
	
	return true;
}

