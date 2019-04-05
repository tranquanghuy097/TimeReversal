#include "Stack.h"
void Move(char move, Position& pos, Stack& stack);

void main()
{
	char move;
	Position pos;
	Stack stack(100);
	std::cout << "x: " << pos.x << " y: " << pos.y << std::endl;
	while(1)
	{
		std::cin >> move;
		if(move == 'f')
			break;
		Move(move, pos, stack);
		std::cout << "x: " << pos.x << " y: " << pos.y << std::endl;
	}

	Position temp;
	
	while(!stack.isEmpty())
	{
		temp = stack.pop();
		std::cout << "x: " << temp.x << " y: " << temp.y << std::endl;
	}
}

void Move(char move, Position& pos, Stack& stack)
{
	switch(move)
	{
	case 'a': stack.push(pos); 
		pos.x--;
		break;
	case 'd': stack.push(pos); 
		pos.x++;
		break;
	case 'w': stack.push(pos); 
		pos.y++;
		break;
	case 's': stack.push(pos); 
		pos.y--;
		break;
	}
}