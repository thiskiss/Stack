#include "stack.h"
#include <string>

using namespace std;

void Stack::push(const string & str) {
	top->str = str;
	Node * temp = top;
	top = new Node();
	top->prev = temp;
}

string Stack::pop() {
	Node * temp = top;
	top = top->prev;
	delete temp;
	size--;
	return top->str;
}

void Stack::clear() {
	while (size != 0) {
		size--;
		Node * temp = top;
		top = top->prev;
		delete temp;
	}
}