#include "stack.h"
#include <string>

using namespace std;

Stack::Stack() {
	top = new Node();
	size = 0;
}

void Stack::push(const string & str) {
	top->n = str;
	Node * temp = top;
	top = new Node();
	top->prev = temp;
}

string Stack::pop() {
	Node * temp = top;
	top = top->prev;
	delete temp;
	size--;
	return top->n;
}

string Stack::back() {
	return top->prev->n;
}

void Stack::clear() {
	while (size != 0) {
		size--;
		Node * temp = top;
		top = top->prev;
		delete temp;
	}
}