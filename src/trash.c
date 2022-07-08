typedef struct Element {
	struct Element *next;
	void *data
} Element;

void push (Element *stack, void *data);
void *pop (Element *stack);

void push (Element **stack, void *data);
void *pop (Element **stack);