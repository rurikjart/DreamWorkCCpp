Class Stack
{
public:
	Stack() : head(NULL) {};
	~Stack();
	void push(void *data);
	void *pop();

protected: 
	class Element{
		public:
			Element (Element *n, void *d): next(n), data(d) {}
			Element *getNext() const {return next; }
			void *value() const { return data; }
		private:
			Element *next;
			void *data;
	};
	
	Element *head
};

Stack::~Stack(){
while(head){
Element *next = head->getNext();
delete head;
head = next;
  }
}

//на второй странице продолжение

void Stack::push(void *data){
  // исключение выбрасывается при ошибке выделения памяти
  Element *element = new Element(head, data);
  head = element;
}

void *Stack::pop() {
	Element *popElement = head;
	void *data;
	/*крласс инскючений реализован в другом месте*/
	
	if(head == HULL)
				throw Exception("Stack::pop");
				
	data = head->value();
	head = head->getNext();
	delete popElement;
	return data;
}