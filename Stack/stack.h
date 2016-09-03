#ifndef STACK_H
#define STACK_H

#include <string>

class Stack {
	class Node {
		friend class Stack;
		std::string n;
		Node * prev;
	};
public:
	Stack();
	void push(const std::string &);
	std::string pop();
	std::string back();
	void clear();
private:
	Node * top;
	int size;
};

#endif