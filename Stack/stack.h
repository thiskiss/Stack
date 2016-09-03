#ifndef STACK_H
#define STACK_H

#include <string>

class Stack {
	class Node {
	public:
		std::string str;
		Node * prev;
	};
public:
	Stack() : top(new Node()), size(0) {}
	~Stack() { this->clear(); delete top; }
	void push(const std::string &);
	std::string pop();
	unsigned getSize() const { return size; }
	void clear();
private:
	Node * top;
	int size;
};

#endif