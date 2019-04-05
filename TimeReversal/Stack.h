#ifndef _STACK_
#define _STACK_
#include <vector>
#include <iostream>

struct Position
{
	int x, y;
	Position()
	{
		x = 0;
		y = 0;
	}
	Position(int xData, int yData)
	{
		x = xData;
		y = yData;
	}
};

class Stack
{
private:
	std::vector<Position> stack;
	int top, max_size;

public:
	Stack() { top = -1;}

	Stack(int size)
	{
		stack.resize(size);
		max_size = size;
		top = -1;
	}

	bool isEmpty()
	{
		return (top == -1)? true : false;
	}

	int size() {return top + 1;}

	void push(Position data)
	{
		if(top == max_size - 1)
		{
			std::cout << "Stack Overflow" << std::endl;
			return;
		}
		stack[++top] = data;
	}

	Position pop()
	{
		if(top == -1)
		{
			std::cout << "Stack Underflow" << std::endl;
			Position wrong(-1, -1);
			return wrong;
		}
		return stack[top--];
	}

};



#endif